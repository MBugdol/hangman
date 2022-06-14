#include "logic/GameEngine.h"
#include <filesystem>
#include <fstream>
#include <iostream>

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
                - add letter to guessed
        3. Finish program
            - leaderboard? ask for name & save score
            - save all necesary data, close program
        */
       //###SETUP###
       setup();   
       mainloop();
       finalize();   
    }

    void GameEngine::setup() const {
        // get absolute path
        std::filesystem::path binpath(m_mainargv[0]);
        std::cout << m_mainargv[0] << "help" << std::endl;
    }
    void GameEngine::mainloop() const {

    }
    void GameEngine::finalize() const {

    }
}