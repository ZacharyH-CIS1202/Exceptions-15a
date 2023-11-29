#ifndef _EXCEPTIONS_H_
#define _EXCEPTIONS_H_

class Character
{
private:
	char start;
	int offset;
public:
	Character()
	{
		start = 'a';
		offset = 0;
	}
	class InvalidCharacterException { };
	class InvalidRangeException{ };
	char character(char start, int offset);
};
#endif // !_EXCEPTIONS_H_
