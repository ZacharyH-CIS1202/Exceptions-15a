#ifndef _EXCEPTIONS_H_
#define _EXCEPTIONS_H_

/*************************************************************
Created a class Character which holds the two empty class
declarations for the Exceptions and the prototype function
character which we implement in the Exceptions.cpp and
use in the driver in Part A(15a).cpp
***********************************************************/
class Character
{
public:
	class InvalidCharacterException { };
	class InvalidRangeException{ };
	char character(char, int);
};
#endif // !_EXCEPTIONS_H_
