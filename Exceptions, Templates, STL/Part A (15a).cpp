/*
Zachary Hartings 
11/30/2023
CIS 1202.201
Chapter 16, Assignment 15a, Part A
*/

#include <iostream>
#include "Exceptions(15a).h"
using namespace std;

/************************************************************************************
Im this driver we will use a series of try/catch blocks to check the start character
and the result after the offset is applied. We create a class called test and then
hard-code all of the start and offset values to match the instructions in 15a.
***********************************************************************************/
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
            cerr << "Invalid. Character Result Is Out Of Range." << endl;
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
            cerr << "Invalid. Character Result Is Out Of Range." << endl;
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
            cerr << "Invalid. Character Result Is Out Of Range." << endl;
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
            cerr << "Invalid. Character Result Is Out Of Range." << endl;
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
            cerr << "Invalid. Character Result Is Out Of Range." << endl;
        }


	system("pause");

	return 0;
}