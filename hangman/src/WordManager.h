#pragma once
#include <iostream>
#include <string>

class WordManager
{
public:
	WordManager(std::string word)
		: m_original(word), m_current(word) {}
	void encrypt();
	void decrypt(char);

	friend std::ostream& operator<<(std::ostream&, const WordManager&);
	void print();
private:
	std::string m_original;
	std::string m_current;
};

