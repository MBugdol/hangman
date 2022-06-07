#include "ArtBox.h"
#include <iostream>

void ArtBox::draw(size_t width) {
	size_t whitespace = width - m_art_width - 2;
	size_t parity = whitespace % 2;
	for (const std::string& line : m_content) {
		std::string line_print = "|" + std::string(whitespace / 2, ' ') + line + std::string(whitespace / 2 + parity, ' ') + "|";
		std::cout << line_print << std::endl;
	}
}

void ArtBox::updateContent(const std::vector<std::string>& content) {
	m_content = content;
	m_art_width = content[0].size();
}

