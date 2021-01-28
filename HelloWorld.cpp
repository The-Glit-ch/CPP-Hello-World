// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>


using namespace std;

/*
Variable Types:

Int: Stores a whole number
Double: Stores a decimal
String: Stores a string
Char: Stores a character
Bool: Stores True or False
*/

int TestInt = 123456;
double TestDouble = 10.62058545;
string TestString = "Hello World";

/*
Constant:

Makes a variable READ ONLY
*/

const string ReadOnly = "Read Only";

string UserInput = "";

int main()
{
    cout << "--Start Up--\n";
    cout << "Vars:\n" << TestInt << "\n" << TestDouble << "\n" << TestString << "\n";
    cout << "Constant Var\n" << ReadOnly << "\n";
    //User Input
    cout << "Type Anything\n";
    cin >> UserInput;
    cout << "You wrote..." << UserInput;

    return 0;
}
