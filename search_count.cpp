/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> // Allows input and output
using namespace std; 

// Name: Md Shahariar Durjoy
// Assignment 5
// Problem 2: Search and Count

int main() { // Program starts

    const int SIZE = 10; // Array contains 10 numbers

    // Creates an array with the given numbers
    int data[SIZE] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5};

    int target; // Stores the number the user wants to find
    int foundIndex = -1; // -1 means the number was not found
    int count = 0; // Counts how many times the number appears

    cout << "Enter a number to search for: "; // Asks for a number
    cin >> target; // Reads the number from the user

    // This loop searches through the whole array
    for (int i = 0; i < SIZE; i++) { // Goes from index 0 to 9

        if (data[i] == target) { // Checks if current number matches
            count++; // Adds 1 to count for each match

            if (foundIndex == -1) { // Checks if this is the first match
                foundIndex = i; // Saves the first matching index
            }
        }
    }

    if (foundIndex != -1) { // Checks if the number was found
        cout << target << " first found at index "
             << foundIndex << endl; // Prints the first index

        cout << target << " appears " << count
             << " time(s)" << endl; // Prints number of matches
    }
    else { // Runs if the number was not found
        cout << target << " was not found." << endl;
    }

    return 0; 
}
