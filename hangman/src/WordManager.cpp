#include "WordManager.h"
#include <iostream>
#include <cassert>

void WordManager::encrypt() {
	for (char& ch : m_current)
		ch = std::isalpha(ch) ? '_' : ch;
}
void WordManager::decrypt(char input_ch) {
	//zakladam, ze wejscie jest juz mala litera!
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
void WordManager::print() {
	std::cout << m_current << std::endl;
}