/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Name: Md Shahariar Durjoy
// Assignment 4

#include <iostream>  //  to use cout and cin
using namespace std; // to write cout and cin without std::

int main()
{
    // Variable to store the user's menu choice
    int choice;

    // A do-while loop runs at least one time
    do
    {
        // Ask user to enter a menu choice
        cout << "Enter a menu choice (1, 2, or 3): ";

        // Store the user's choice
        cin >> choice;

        // Check if the choice is not 1, 2, or 3
        if (choice != 1 && choice != 2 && choice != 3)
        {
            //  the choice is invalid
            cout << "Invalid choice, try again." << endl;
        }

    // Keep repeating while the choice is invalid
    } while (choice != 1 && choice != 2 && choice != 3);

    // Display the valid option
    cout << "You selected option " << choice << "." << endl;

    return 0;
}