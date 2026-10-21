/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Name: Md Shahariar Durjoy
// Assignment 4

#include <iostream>  
using namespace std; 

int main()
{
    int number;

    // Ask the user to enter a whole number
    cout << "Enter a number: ";

    // Store the user's input 
    cin >> number;

    // Loop from 1 through 10
    for (int i = 1; i <= 10; i++)
    {
        // Multiply the user's number by i and display the result
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}