#include "logic/GameEngine.h"
#include "hangmanpch.h"
int main(const int argc, const char** argv) {
	logic::GameEngine game(argc, argv);
	game.start();
	return 0;
}