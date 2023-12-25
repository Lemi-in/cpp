#include <iostream>
using namespace std;

int main() {
  int num, i = 0, Total = 0;

  while (i < 5) {
    cout << "Enter: " << endl;
    cin >> num;

    Total = Total + num;
    cout << Total << endl;

    i++;
  }

  return 0;
}
