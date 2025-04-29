#include <iostream>
#include <cmath> // For pow()
using namespace std;

int main() {
    int input, temp, arm = 0, count = 0;
    cout << "Enter number to find if it is an Armstrong number or not: ";
    cin >> input;

    int originalInput = input;

    // Count the number of digits
    int num = input;
    while (num != 0) {
        num /= 10;
        count++;
    }

    // Calculate the Armstrong number
    num = input;
    while (num != 0) {
        temp = num % 10;
        arm += pow(temp, count); // Raise each digit to the power of 'count'
        num /= 10;
    }

    // Compare and print result
    if (originalInput == arm)
        cout << "The number " << originalInput << " is an ARMSTRONG number." << endl;
    else
        cout << "The number " << originalInput << " isn't an ARMSTRONG number." << endl;

    return 0;
}

