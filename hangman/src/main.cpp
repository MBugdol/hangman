#include "ArtBox.h"
#include <string>
#include <iostream>
int main() {
	int i = 45;
	ArtBox hangman;
	hangman.updateContent({
		R"(_________)",
		R"( \|    | )",
		R"(  |    x )",
		R"(  |   '|')",
		R"(  |    ^ )",
		R"( / \     )",
		R"(/   \    )"
	});
	std::string separator = "+" + std::string(i - 2, '-') + "+";
	std::cout << separator << std::endl;
	hangman.draw(i);
	std::cout << separator << std::endl;
	return 0;
}