#pragma once
#include <string>
#include <map>
#include "Operator.h"

class OperatorManager {
private:
	std::map<std::string,Operator> operators;

public:
	OperatorManager() = default;
	OperatorManager(const OperatorManager& other) = default;

	void registerOperator(const std::string name, const std::string& symbol, std::function<double(double, double)> func);
	void unregisterOperator(const std::string& name);
	const Operator& getOperator(const std::string name) const throw(std::exception); 
	std::map<std::string, Operator>& getOperators(); 
};