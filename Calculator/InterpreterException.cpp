#include "InterpreterException.h"

InterpreterException::InterpreterException(const std::string& _interpreterName, const std::string& _errorMessage, const std::string& _expression) noexcept
	: interpreterName(_interpreterName),
	errorMessage(_errorMessage),
	expression(_expression) {}


const char* InterpreterException::what() const noexcept {
	// a pointer to a temporary array
	return (std::string("error") + ":" + expression).c_str();
}