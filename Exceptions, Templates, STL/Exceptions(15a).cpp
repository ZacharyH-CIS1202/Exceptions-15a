#include <iostream>
#include <cctype>
#include "Exceptions(15a).h"
using namespace std;

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