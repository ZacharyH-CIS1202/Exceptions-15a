#ifndef _EXCEPTIONS_H_
#define _EXCEPTIONS_H_

class Character
{
private:
	char start;
	int offset;
public:
	void InvalidCharacterException();
	void InvalidRangeException();
	char character(char, int);
};
#endif // !_EXCEPTIONS_H_
