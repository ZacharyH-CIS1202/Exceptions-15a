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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
