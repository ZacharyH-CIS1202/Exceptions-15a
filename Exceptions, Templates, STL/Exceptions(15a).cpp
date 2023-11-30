#include <iostream>
#include <cctype>
#include "Exceptions(15a).h"
using namespace std;

/**********************************************************************************************************
This character function which returns the char 'target' which is the position of the character
after the offset is applied. If the start value is not a character it throws an InvalidCharacterException
and if the target is not a character or the start and target are not the same case (lower or upper) it
throws an InvalildRangeException.
***********************************************************************************************************/
char Character::character(char start, int offset)
{
		if (!isalpha(start))
		{
			throw InvalidCharacterException();
		}

		char target = start + offset;

		if (!isalpha(target) || isupper(start) && islower(target))
		{
			throw InvalidRangeException();
		}

		cout << start << ", " << offset << " Result = ";
		cout << target << endl;
}