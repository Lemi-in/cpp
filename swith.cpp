#include <iostream>
using namespace std;

int main() {
    float result;
    int creditHour = 0;
    float totalGradePoints = 0;
    int totalCreditHours = 0;

    for (int i = 1; i <= 7; ++i) {
        cout << "Enter your result for course " << i << ": ";
        cin >> result;
        cout << "Enter the credit hour for course " << i << ": ";
        cin >> creditHour;

        float grade = 0; // Initialize grade to 0

        // Using switch statements to determine the grade based on the result
        switch (static_cast<int>(result)) {
            case 90 ... 100:
                grade = 4.0; // AA
                break;
            case 85 ... 89:
                grade = 4.0; // A
                break;
            case 80 ... 84:
                grade = 3.75; // Aa
                break;
            case 75 ... 79:
                grade = 3.5; // BB
                break;
            case 70 ... 74:
                grade = 3.0; // B
                break;
            case 65 ... 69:
                grade = 2.75; // Bb
                break;
            case 60 ... 64:
                grade = 2.5; // CC
                break;
            case 50 ... 59:
                grade = 2.0; // C
                break;
            case 45 ... 49:
                grade = 1.75; // Cc
                break;
            case 40 ... 44:
                grade = 1.0; // D
                break;
            case 1 ... 39:
                grade = 0.0; // F
                break;
            default:
                cout << "Invalid result entered for course " << i << ". Setting grade to 0." << endl;
                break;
        }

        totalGradePoints += grade * creditHour;
        totalCreditHours += creditHour;

        cout << "\n";
    }

    if (totalCreditHours > 0) {
        float GPA = totalGradePoints / totalCreditHours;
        cout << "Your GPA is: " << GPA << endl;
    } else {
        cout << "Enter a valid credit hour" << endl;
    }

    return 0;
}
