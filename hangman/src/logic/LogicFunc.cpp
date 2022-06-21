#include "logic/LogicFunc.h"

//add protection aganist min > max

namespace logic {
    int randomInt(int min, int max) {
        if(min > max) throw std::invalid_argument("randomInt - lower boundary cannot be greater than upper boundary");
        std::random_device seed;
        std::default_random_engine rengine(seed());
        std::uniform_int_distribution<int> uniform_dist(min, max);
        return uniform_dist(rengine);
    }
    std::vector<std::string> splitStream(std::istream& istr, char delim) {
        std::vector<std::string> result;
        std::string str;
        while(std::getline(istr, str, delim)) {
            if(str.empty()) continue;
            result.emplace_back(str);
        }
        return result;
    }
}