#include <iostream>
using namespace std;
int main() {
    const int size = 8;
    int temp[size];
    int total = 0;

    
    for (int i = 0; i < size; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> temp[i];
        total += temp[i];
    }

    
        cout << "\nEntered numbers: ";
    for (int i = 0; i < size; ++i) {
        cout << temp[i] << " ";
    }

    float average = static_cast<float>(total) / size;
        cout << "\nTotal: " << total << "\nAverage: " << average << endl;

    return 0;
}
