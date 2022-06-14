#include "logic/GameEngine.h"

int main(const int argc, const char** argv) {
	const logic::GameEngine game(argc, argv);
	game.start();
}