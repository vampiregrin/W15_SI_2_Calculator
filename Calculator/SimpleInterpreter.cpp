#include "SimpleInterpreter.h"
#include <sstream>


std::vector<std::string> SimpleInterpreter::split(const std::string& str) {
    std::vector<std::string> ret;
    std::stringstream ssin(str);
    while (ssin.good()) {
        std::string buffer;
        ssin >> buffer;
        ret.push_back(buffer);

    }
    return ret;
}