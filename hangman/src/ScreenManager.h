#pragma once
#include <string>
#include <vector>

/*
>Hangman
>Sentence
>Letters/Guesses
>User prompt
*/
class ScreenManager
{
public:
	void draw();
	void updateDrawingBox(const std::vector<std::string>& content) { m_drawing_box = content; }
	void updateSentenceBox(const std::vector<std::string>& content) { m_sentence_box = content; }
	void updateGuessesBox(const std::vector<std::string>& content) { m_guesses_box = content; }
	void updateInputBox(const std::vector<std::string>& content) { m_input_box = content; }
private:
	const size_t SCREEN_WIDTH = 75;
	std::vector<std::string> m_drawing_box;
	std::vector<std::string> m_sentence_box;
	std::vector<std::string> m_guesses_box;
	std::vector<std::string> m_input_box;
};

