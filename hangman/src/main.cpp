#include "WordManager.h"
#include <iostream>

int main() {
	WordManager wordmng("Jerzy Bodzenta przyjaciel studenta");
	wordmng.encrypt();
	wordmng.print();
	char ch;
	while(std::cin >> ch){
		wordmng.decrypt(ch);
		std::cout << std::endl;		
		wordmng.print();
	}
	return 0;
}