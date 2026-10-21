/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> // to use cin and cout
using namespace std; // Lets us write cout instead of std::cout

// Name: Md Shahariar Durjoy
// Assignment 5
// Problem 1: Test Score Statistics

int main() { // Main function

    const int SIZE = 5; // array size to 5
    int scores[SIZE]; // Creates an array to store 5 scores
    int sum = 0; // Starts the total sum at 0

    // the user to enter 5 scores
    for (int i = 0; i < SIZE; i++) { // Runs from index 0 to 4
        cout << "Enter score " << i + 1 << ": "; // Shows score number
        cin >> scores[i]; // Stores the score in the array
    }

    int highest = scores[0]; // Starts highest with the first score
    int lowest = scores[0]; // Starts lowest with the first score

    // calculates sum, highest, and lowest
    for (int i = 0; i < SIZE; i++) { // Checks every score
        sum += scores[i]; // Adds the current score to sum

        if (scores[i] > highest) { // Checks for a higher score
            highest = scores[i]; // Updates highest score
        }

        if (scores[i] < lowest) { // Checks for a lower score
            lowest = scores[i]; // Updates lowest score
        }
    }

    // Converts sum to double
    double average = static_cast<double>(sum) / SIZE;

    cout << "Scores: "; // Prints the scores label

    for (int i = 0; i < SIZE; i++) { // Goes through all scores
        cout << scores[i] << " "; // Prints each score
    }

    cout << endl; // Moves to a new line
    cout << "Sum: " << sum << endl; // Prints total sum
    cout << "Average: " << average << endl; // Prints average
    cout << "Highest: " << highest << endl; // Prints highest
    cout << "Lowest: " << lowest << endl; // Prints lowest

    return 0; 
}
