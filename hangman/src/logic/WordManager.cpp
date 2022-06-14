#include "logic/WordManager.h"
#include <iostream>
#include <cassert>

namespace logic {
	void WordManager::encrypt() {
		for (char& ch : m_current)
			ch = std::isalpha(ch) ? '_' : ch;
	}
	void WordManager::decrypt(const char input_ch) {
		assert(std::islower(input_ch));

		for (int i = 0; i < m_current.length(); i++) {
			char& current_ch = m_current[i];
			char original_ch = m_original[i];
			if (current_ch != '_') continue;
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