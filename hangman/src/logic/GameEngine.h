#pragma once
#include "hangmanpch.h"
#include "logic/WordManager.h"

namespace logic {
    class GameEngine {
    public:
        GameEngine(const int argc, const char** argv) : m_mainargc(argc), m_mainargv(argv) {} 
        void start();
    private:    
        void setup();
        void mainloop();
        void finalize();         

        WordManager m_word;
        //needed for getting the path of the binary
        //argc in case some flags will be passed to the program
        const int m_mainargc;
        const char** m_mainargv;
    };
}