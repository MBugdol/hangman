#include "WordManager.h"

int main() {
	WordManager wordmng("Indyk myslal o niedzieli, a w sobote glowe mu ucieli");
	wordmng.print();
	wordmng.encrypt();
	wordmng.print();
	wordmng.decrypt('w');
	wordmng.decrypt('z');
	wordmng.decrypt('k');
	wordmng.decrypt('a');
	wordmng.print();
	return 0;
}