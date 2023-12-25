#include <iostream>

using namespace std;

int main() {
  double totalPoints = 0.0;
  double totalMaxPoints = 0.0;
  int numExercises, score, maxPoints;

  cout << "Enter the number of exercises: ";
  cin >> numExercises;

  if (numExercises == 0) {
    cout << "No exercises entered! Please enter at least one exercise." << endl;
    return 0;
  }

  for (int i = 1; i <= numExercises; ++i) {
    cout << "Enter the score for exercise " << i << ": ";
    cin >> score;
    if (score < 0 || score > 100) {
      cout << "Invalid score. Please enter a value between 0 and 100." << endl;
      continue;
    }

    cout << "Enter the maximum points possible for exercise " << i << ": ";
    cin >> maxPoints;
    if (maxPoints <= 0) {
      cout << "Invalid maximum points. Please enter a positive value." << endl;
      continue;
    }

    if (score > maxPoints) {
      cout << "Score for exercise " << i << " cannot be more than the maximum points (" << maxPoints << "). Please enter a valid score." << endl;
      continue;
    }

    totalPoints += score;
    totalMaxPoints += maxPoints;
  }

  
  double overallPercentage = (totalPoints / totalMaxPoints) * 100.0;

  cout << "Your total is " << (int)totalPoints << " out of " << (int)totalMaxPoints << ", or " << overallPercentage << "%." << endl;

  return 0;
}
