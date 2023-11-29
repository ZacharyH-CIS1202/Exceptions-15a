#include <iostream>
#include <cctype>
#include "Exceptions(15a).h"
using namespace std;

char Character::character(char start, int offset)
{
	try 
	{
		if (!isalpha(start))
		{
			throw InvalidCharacterException();
		}

		char target = start + offset;

		if (!isalpha(target))
		{
			throw InvalidRangeException();
		}
	}
	catch (const InvalidCharacterException& e)
	{
		cerr << "Invalid Character Entered." << endl;
	}
	catch (const InvalidRangeException& e)
	{
		cerr << "The Offset Is Too Large. Invalid Character Result." << endl
	}
}