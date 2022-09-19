#pragma once
#include <string>
#include "OperatorManager.h"


class Interpreter
{
public:
	virtual ~Interpreter() {}
	virtual double interpret(const std::string& in, const OperatorManager& om) = 0;
};

