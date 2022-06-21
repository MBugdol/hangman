#include "logic/GameEngine.h"
#include "logic/FileManager.h"
#include "logic/WordManager.h"
#include "logic/LogicFunc.h"

namespace logic {
    void GameEngine::start() {
        /*
        1. [v] Initialize:
            [v] choose a random sentence from phrases file
        2. Start main loop:
            a) initial:
                - display ui
                - get user input
            b) logic:
                [v] check if letter was already guessed - if yes, skip this iteration
                [v] add letter to guessed
                - if input not in word, incerase bad guesses
                [v] else decode the word using input
                [v] check if word is complete / if all guesses have been used up - finish program 
        3. Finish program
            - leaderboard? ask for name & save score
            - save all necesary data, close program
        */
       setup();   
       mainloop();
       finalize();   
    }

    void GameEngine::setup() {
        FileManager::setDatapath(m_mainargv[0]);
        m_word = WordManager(WordManager::randomPhrase());
        m_word.encrypt();
    }
    void GameEngine::mainloop() {
        bool running = true;
        std::cout << m_word << std::endl;
        while(running) {
           //displayUI
           //"get input"
           char ch = 'a' + randomInt(0, 25);
           //process input
           m_word.processInput(ch);
           std::cout << m_word << std::endl;
           if(m_word.allGuessed()) {
               running = false;
           }
        }
    }
    void GameEngine::finalize() {

    }
}