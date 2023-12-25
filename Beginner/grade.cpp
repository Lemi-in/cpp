#include <iostream>
using namespace std;

int main() {
    float result;
    float AA = 4;  // AA is A+
    float A = 4;
    float Aa = 3.75;  // Aa is A-
    float BB = 3.5;  // BB is B+
    float B = 3;
    float Bb = 2.75;  // Bb is B-
    float CC = 2.5;  // CC is C+
    float C = 2;
    float Cc = 1.75;  // Cc is C-
    float D = 1;
    float F = 0;
    float grade = 0;
    int creditHour = 0;
    float totalGradePoints = 0;
    int totalCreditHours = 0;

    for (int i = 1; i <= 7; ++i) {
        cout << "Enter your result for course " << i << ": ";
        cin >> result;
        cout << "Enter the credit hour for course " << i << ": ";
        cin >> creditHour;

        if (result >= 90) {
            grade = AA;
        } else if (result >= 85) {
            grade = A;
        } else if (result >= 80) {
            grade = Aa;
        } else if (result >= 75) {
            grade = BB;
        } else if (result >= 70) {
            grade = B;
        } else if (result >= 65) {
            grade = Bb;
        } else if (result >= 60) {
            grade = CC;
        } else if (result >= 50) {
            grade = C;
        } else if (result >= 45) {
            grade = Cc;
        } else if (result >= 40) {
            grade = D;
        } else if (result >= 1 && result <= 39) {
            grade = F;
        }

        totalGradePoints += grade * creditHour;
        totalCreditHours += creditHour;

        cout << "\n";
    }

    if (totalCreditHours > 0) {
        float GPA = totalGradePoints / totalCreditHours;
        cout << "Your GPA is: " << GPA << endl;
    } else {
        cout << "Enter a valid credit Hour" << endl;
    }

    return 0;
}
