#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

class Code {
public:
    int shift;
    string output;

    unsigned long long encrypt(string input) {
        unsigned long long encrypted = 0;
        srand(time(0));
        shift = rand() % 800;
        int l = input.size();
        for (int i = 0; i < l; ++i) {
            char ch = input[i];
            encrypted = encrypted * 1000 + ((int)ch + shift);
        }
        return encrypted;
    }

    string decrypt(unsigned long long input) {
        string decrypted = "";
        while (input != 0) {
            int in = input % 1000;
            input /= 1000;
            decrypted = char(in - shift) + decrypted;
        }
        return decrypted;
    }
};

int main() {
    Code a;
    unsigned long long codeinput;
    string textinput;
    int choice;
	x:
    cout << "Select what you want to do:" << endl
         << "\t1) Encrypt" << endl
         << "\t2) Decrypt" << endl;
    cin >> choice;
    cin.ignore();  // Clear the input buffer
    switch (choice) {
        case 1:
            cout << "Enter text: ";
            getline(cin, textinput);  // Allows for spaces in the input
            cout << "The encrypted code is: " << a.encrypt(textinput) << endl;
            cout << "Your encryption shift code: " << a.shift << endl;
            break;
        case 2:
            cout << "Enter code: ";
            cin >> codeinput;
            cout << "Enter encryption code: ";
            cin >> a.shift;
            cout << "Your text is: " << a.decrypt(codeinput) << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            goto x;
            break;
    }
    return 0;
}

