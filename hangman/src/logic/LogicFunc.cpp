#include "logic/LogicFunc.h"

//add protection aganist min > max

namespace logic {
    int getRandomInt(int min, int max) {
        std::random_device seed;
        std::default_random_engine rengine(seed());
        std::uniform_int_distribution<int> uniform_dist(min, max);
        return uniform_dist(rengine);
    }
}