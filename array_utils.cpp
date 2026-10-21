/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream> // Allows us to use cin and cout
using namespace std; // Uses standard namespace

// Name: Md Shahariar Durjoy
// Assignment 5
// Problem 3: Array Utilities with Functions

// This function prints the array from first to last
void printForward(const int arr[], int size) {
    for (int i = 0; i < size; i++) { // Starts at index 0
        cout << arr[i] << " "; // Prints each number
    }
    cout << endl; // Moves to the next line
}

// This function prints the array from last to first
void printReverse(const int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) { // Moves backward
        cout << arr[i] << " "; // Prints each number
    }
    cout << endl; // Moves to the next line
}

// This function counts numbers greater than the limit
int countAbove(const int arr[], int size, int limit) {
    int count = 0; // Starts the counter at 0

    for (int i = 0; i < size; i++) { // Checks each element
        if (arr[i] > limit) { // Checks if number is above limit
            count++; // Adds 1 when condition is true
        }
    }

    return count; 
}

int main() { // Main function starts here

    const int SIZE = 6; // Sets array size to 6
    int values[SIZE] = {14, 3, 27, 9, 50, 21}; // Creates array
    int limit; // Stores the limit entered by user

    cout << "Forward: "; // Prints forward label
    printForward(values, SIZE); // Calls forward function

    cout << "Reverse: "; // Prints reverse label
    printReverse(values, SIZE);

    cout << "Count values above: "; // Asks user for a limit
    cin >> limit; // Reads the limit

    // Calls countAbove and saves the result
    int result = countAbove(values, SIZE, limit);

    cout << "Count: " << result << endl; 

    return 0; 
}
