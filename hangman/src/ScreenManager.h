#ifndef SCREENMANAGER
#define SCREENMANAGER

#include <string>
#include <vector>

//
// UI LAYOUT:
// +-------------+-----+
// | TEXT TO     |DRA- |
// |   GUESS     |WING |
// +-------------+-----+
// | GUESSED LETTERS   |
// |  + ERRORCOUNT     |
// +-------------------+
// | INPUT:            |
// +-------------------+ 
//
//todo: class for textbox
class ScreenManager {
public:
    void draw();
private:
    const size_t SCREENWIDTH = 50;
};

#endif