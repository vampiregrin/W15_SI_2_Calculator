#pragma once

#include <exception>
#include <string>

class InterpreterException : public std::exception
{
private:
	std::string interpreterName;
	std::string errorMessage;
	std::string expression;
	
public:

	InterpreterException(const std::string& _interpreterName, const std::string& _errorMessage, const std::string& _expression) noexcept;

	const char* what() const noexcept;
};

