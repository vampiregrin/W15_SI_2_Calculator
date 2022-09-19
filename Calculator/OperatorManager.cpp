#include "OperatorManager.h"

#include <utility>


void OperatorManager::registerOperator(const std::string name, const std::string& symbol, std::function<double(double, double)> func) {

	Operator op(name, symbol, func);
	operators.insert(std::pair<std::string, Operator>(name, op));
}

void OperatorManager::unregisterOperator(const std::string& name) {
	operators.erase(name);
}

const Operator& OperatorManager::getOperator(const std::string name) const throw(std::exception) {
	auto search = operators.find(name);
	if (search == operators.end()) {
		throw std::exception("Cannot find operator");
	}
	return search->second;
}

std::map<std::string, Operator>& OperatorManager::getOperators() {
	return operators;
}
