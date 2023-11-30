#ifndef _EXCEPTIONS_H_
#define _EXCEPTIONS_H_

class Character
{
public:
	class InvalidCharacterException { };
	class InvalidRangeException{ };
	char character(char, int);
};
#endif // !_EXCEPTIONS_H_
