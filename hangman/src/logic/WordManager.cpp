#include "logic/WordManager.h"
#include "logic/FileManager.h"
#include "logic/LogicFunc.h"

namespace logic {
	std::string WordManager::m_phrases_file = "phrases.data";

	void WordManager::processInput(const char input_ch) {
		if(!std::isalpha(input_ch)) 
			throw std::invalid_argument{"logic::WordManager::processInput | input must be alphabetic!"};
		if(wasGuessed(input_ch)) {
			std::cout << "Letter \"" << input_ch << "\" has already been entered!" << std::endl;
			return;
		} 
		decrypt(input_ch);
	}

	bool WordManager::wasGuessed(const char ch) {
		int bit_pos = std::tolower(ch) - 'a';
		bool guessed = m_guessed_letters[bit_pos];
		if(!guessed) m_guessed_letters[bit_pos] = true;
		return guessed;
	}

	std::string WordManager::randomPhrase() {
		FileManager fmgr{m_phrases_file};	
		fmgr.startInput();
		std::vector<std::string> sentences = splitStream(fmgr.file());
		return sentences[randomInt(0, sentences.size()-1)];
	}

	void WordManager::encrypt() {
		for (char& ch : m_current)
			ch = std::isalpha(ch) ? '_' : ch;
	}
	void WordManager::decrypt(const char input_ch) {
		assert(std::islower(input_ch));

		for (int i = 0; i < m_current.length(); i++) {
			char& current_ch = m_current[i];
			char original_ch = m_original[i];
			if (current_ch != '_' || original_ch == '_' ) continue;
			if (input_ch == std::tolower(original_ch))
				current_ch = original_ch;
		}
	}

	std::ostream& operator<<(std::ostream& ostr, const WordManager& obj) {
		ostr << obj.m_current;
		return ostr;
	}
	std::string_view WordManager::current() const {
		return m_current;
	}
}