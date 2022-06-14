#include "logic/GameEngine.h"
#include <filesystem>
#include <iostream>
#include "logic/FileManager.h"

namespace logic {
    void GameEngine::start() const {
        /*
        1. Setup:
            - choose a random sentence from database
        2. Start main loop:
            a) initial:
                - display ui
                - get user input
            b) logic:
                - check if letter was already guessed - if yes, go back to a
                - if input not in word, incerase bad guesses
                - else decode the word using input
                - check if word is complete / if all guesses have been used up - finish program 
        3. Finish program
                - add letter to guessed
            - leaderboard? ask for name & save score
            - save all necesary data, close program
        */
       setup();   
       mainloop();
       finalize();   
    }

    void GameEngine::setup() const {
        FileManager::setDatapathFromMainArgs(m_mainargv);
    }
    void GameEngine::mainloop() const {

    }
    void GameEngine::finalize() const {

    }
}