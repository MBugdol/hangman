#pragma once
#include "hangmanpch.h"

namespace logic {
    int randomInt(int min=0, int max=0);
    std::vector<std::string> splitStream(std::istream& istr, char delim = '\n');
}