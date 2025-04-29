#include <iostream>
using namespace std;

int main() {
    int input, originalInput, reversed = 0, temp;
    cout << "Enter number to find if it is a palindrome or not: ";
    cin >> input;
    originalInput = input;

    while (input != 0) {
        temp = input % 10;      // Get the last digit of the number
        reversed = reversed * 10 + temp;  // Add the digit to the reversed number
        input /= 10;            // Remove the last digit from the input number
    }

    if (reversed == originalInput)
        cout << "The number " << originalInput << " is a PALINDROME number." << endl;
    else
        cout << "The number " << originalInput << " isn't a PALINDROME number." << endl;

    return 0;
}

