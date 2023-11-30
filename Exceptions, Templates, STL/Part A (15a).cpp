/*
Zachary Hartings 
11/30/2023
CIS 1202.201
Chapter 16, Assignment 15a, Part A
*/

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