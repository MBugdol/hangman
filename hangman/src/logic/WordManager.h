#pragma once
#include "hangmanpch.h"

namespace logic {
	class WordManager
	{
	public:
		WordManager(std::string_view word) : m_original(word), m_current(word) {}
		
		void getRandomPhrase();

		void encrypt();
		void decrypt(const char);

		friend std::ostream& operator<<(std::ostream&, const WordManager&);
		std::string_view current() const;
	private:
		std::string m_original;
		std::string m_current;

		static std::string m_phrases_file;
	};
}