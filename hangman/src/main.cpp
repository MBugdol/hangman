<<<<<<< HEAD
#include "logic/GameEngine.h"

int main(const int argc, const char** argv) {
	const logic::GameEngine game(argc, argv);
	game.start();
=======
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
>>>>>>> aeaf5544f7fb369d5260cc1cfccb88adcd2eb41a
}