#pragma once
#include "Interpreter.h"

#include <string>
#include <vector>
#include "InterpreterException.h"

class SimpleInterpreter :
    public Interpreter
{
public:
    virtual double interpret(const std::string& in, const OperatorManager& om) {
        std::vector<std::string> tokens = split(in);
        if (tokens.size() != 3) {
            throw InterpreterException("name", "Incorrect number of arguments", in);
        }
        try {
            Operator op = om.getOperator(tokens[1]);
            double a = atof(tokens[0].c_str());
            double b = atof(tokens[2].c_str());
            double ret = op(a, b);
            return ret;
        }
        catch (std::exception& ex) {
            throw InterpreterException("name", "Cannot find operator", in);
        }
     }

private:
    std::vector<std::string> split(const std::string& str);
};

