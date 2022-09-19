#pragma once
#include <cmath>
#include <functional>
#include <string>

class Multiplication
{

public:
	Multiplication() noexcept : name("multiplicate"), symbol("*") {}
	Multiplication(const Multiplication&) noexcept = default;
	double operator()(double& a, double& b) noexcept {
		return func(a, b);
	}

	std::function<double(double, double)> func = [](double a, double b) { return std::fmod(a * b, 10); };

private:
	std::string name;
	std::string symbol;

};

