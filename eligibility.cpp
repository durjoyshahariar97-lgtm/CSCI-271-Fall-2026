/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Name: Durjoy
// Assignment 3
// Discount Eligibility

#include <iostream> // Allows us to use cout and cin
using namespace std;

int main() {
    int age;
    int isMember;

    cout << "Enter your age: "; // Ask the user to enter their age
    cin >> age;

    cout << "Are you a member? (1 = yes, 0 = no): "; // Ask the user if they are a member
    cin >> isMember;

    if (age >= 60 || (age >= 18 && isMember == 1)) { // Check if the person is 60 or older
        cout << "You qualify for the discount." << endl;
    }
    else {
        cout << "You do not qualify for the discount." << endl;
    }

    return 0;
}