#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char AnySymbol;
    char choice;

    do {
        cout << "Enter any symbol: ";
        cin >> AnySymbol;

        if (isalpha(AnySymbol)) {
            if (isupper(AnySymbol)) {
                cout << "The character is an alphabet and it is an uppercase." << endl;
            }
            if (islower(AnySymbol)) {
                cout << "The character is an alphabet and it is a lowercase." << endl;
            }
        } else if (isdigit(AnySymbol)) {
            if (AnySymbol % 2 == 0) {
                cout << "The character you entered is a number and it is an even number." << endl;
            } else {
                cout << "The character you entered is a number and it is an odd number." << endl;
            }
        } else {
            cout << "The character is a symbol." << endl;
        }

        cout << "Do you want to enter another symbol? (y/n): ";
        cin >> choice;

    } while (tolower(choice) == 'y');

    return 0;
}
