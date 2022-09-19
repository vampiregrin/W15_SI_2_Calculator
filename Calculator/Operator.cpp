#include "Operator.h"


Operator::Operator(const std::string& name_, const std::string& symbol_, std::function<double(double, double)> func_) noexcept
	: name(name_), symbol(symbol_), func(func_) {}

double Operator::operator()(double& a, double& b) const noexcept {
	return func(a, b);
}

const std::string& Operator::getName() const {
	return name;
}

const std::string & Operator::getSymbol() const {
	return symbol;
}