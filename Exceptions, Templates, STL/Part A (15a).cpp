// Exceptions, Templates, STL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Exceptions(15a).h"
using namespace std;

int main()
{
	Character test;

        try
        {
            test.character('a', 1);
        }
        catch (const Character::InvalidCharacterException& e)
        {
            cerr << "Invalid Character Entered." << endl;
        }
        catch (const Character::InvalidRangeException& e)
        {
            cerr << "Invalid Character Result." << endl;
        }

        try
        {
            test.character('a', -1);
        }
        catch (const Character::InvalidCharacterException& e)
        {
            cerr << "Invalid Character Entered." << endl;
        }
        catch (const Character::InvalidRangeException& e)
        {
            cerr << "Invalid Character Result." << endl;
        }

        try
        {
            test.character('Z', -1);
        }
        catch (const Character::InvalidCharacterException& e)
        {
            cerr << "Invalid Character Entered." << endl;
        }
        catch (const Character::InvalidRangeException& e)
        {
            cerr << "Invalid Character Result." << endl;
        }

        try
        {
            test.character('?', 5);
        }
        catch (const Character::InvalidCharacterException& e)
        {
            cerr << "Invalid Character Entered." << endl;
        }
        catch (const Character::InvalidRangeException& e)
        {
            cerr << "Invalid Character Result." << endl;
        }

        try
        {
            test.character('A', 32);
        }
        catch (const Character::InvalidCharacterException& e)
        {
            cerr << "Invalid Character Entered." << endl;
        }
        catch (const Character::InvalidRangeException& e)
        {
            cerr << "Invalid Character Result." << endl;
        }


	system("pause");

	return 0;
}