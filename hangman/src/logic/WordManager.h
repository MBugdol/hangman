#pragma once
#include "hangmanpch.h"

namespace logic {
	class WordManager
	{
	public:
		explicit WordManager(std::string_view word) : m_original(word), m_current(word) {}
		WordManager() = default;
		WordManager(WordManager&) = default;
		WordManager(WordManager&&) = default;
		WordManager& operator=(WordManager&) = default;
		WordManager& operator=(WordManager&&) = default;

		bool allGuessed() {return m_original == m_current;}
		bool wasGuessed(const char ch);
		void processInput(const char input_ch);

		static std::string randomPhrase();
		
		void encrypt();
		void decrypt(const char input_ch);

		friend std::ostream& operator<<(std::ostream& ostr, const WordManager& obj);
		std::string_view current() const;
	private:
		std::string m_original;
		std::string m_current;
		std::bitset<26> m_guessed_letters;
		static std::string m_phrases_file;
	};
}