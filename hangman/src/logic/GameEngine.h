#pragma once

namespace logic {
    class GameEngine {
    public:
        GameEngine(const int argc, const char** argv) : m_mainargc(argc), m_mainargv(argv) {} 
        void start() const;
    private:    
        void setup() const;
        void mainloop() const;
        void finalize() const;         

        //needed for getting the absolute path of the project
        //argc in case some flags will be passed to the program
        const int m_mainargc;
        const char** m_mainargv;
    };
}