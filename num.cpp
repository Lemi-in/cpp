#include <iostream>
#include <cctype>
using namespace std;

int main() {
  int number;
  int sum = 0;
  string input;

  while (true) {
    cout << "Enter a number (enter N/n to quit, = to display sum): " << endl;
    cin >> input;

    if (input == "N" || input == "n") {
      break;
    } else if (input == "=") {
      cout << "The sum is: " << sum << endl;
      continue;
    }

    if (!isdigit(input[0])) {
      cout << "Invalid input. Please enter a number, N/n to quit, or = to display sum." << endl;
      continue;
    }

    number = stoi(input);
    if (number % 3 == 0 || number % 7 == 0) {
      continue;
    }
    sum += number;
  }

  cout << "Quitting the program." << endl;

  return 0;
}
