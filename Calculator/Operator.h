#pragma once
#include <cmath>
#include <functional>
#include <string>


class Operator
{
private:
	std::string name;
	std::string symbol;
	std::function<double(double, double)> func;

public:
	Operator(const std::string& name_, const std::string& symbol_, std::function<double(double, double)> func_) noexcept;
	Operator(const Operator&) noexcept = default;
	
	double operator()(double& a, double& b) const noexcept; 

	const std::string& getName() const ;
	const std::string& getSymbol() const; 
};

