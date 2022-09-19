#include <iostream>
#include "Operator.h"
#include "OperatorManager.h"
#include "SimpleInterpreter.h"


int main() {

	Operator plus("plus", "+", [](double a, double b) { return std::fmod(a + b, 10); });
	Operator minus("minus", "-", [](double a, double b) { return std::fmod(a - b, 10); });
	Operator multiply("multiply", "*", [](double a, double b) { return std::fmod(a * b, 10); });

	double a = 4;
	double b = 2;
	double c = plus(a,b);
	double d = minus(a, b);
	double e = multiply(a, b);

//	std::cout << c << std::endl;
//	std::cout << d << std::endl;
//	std::cout << e << std::endl;


	OperatorManager om;
	om.registerOperator("plus", "+", [](double a, double b) { return std::fmod(a + b, 10); });
	om.registerOperator("minus", "-", [](double a, double b) { return std::fmod(a -
		b, 10); });


    const Operator & opPlus = om.getOperator("plus");
	const Operator& opMinus = om.getOperator("minus");

//	std::cout << opPlus(a, b) << std::endl;
//	std::cout << opMinus(a, b) << std::endl;

	SimpleInterpreter interpreter;
	double z = interpreter.interpret("4 plus 2", om);
	std::cout << z << std::endl;


	double w = interpreter.interpret("4 minus 2", om);
	std::cout << w << std::endl;
	return 0;
}
