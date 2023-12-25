
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int times;
    int nums;
    double sum = 0.0;
    double sumOfSquares = 0.0;

    cout << "How many numbers you want to Enter? " << endl;
    cin >> times;
    cout << "Enter the numbers: " << endl;

    for (int i = 1; i <= times; ++i)
    {
        cin >> nums;

        sum += nums;
        sumOfSquares += nums * nums;

    }
    cout << "The numbers are " << endl;
    for (int i = 1; i <= times; ++i)
    {
        cout << nums << endl;
    }

    cout << "\n";
  double mean = sum / times;
  double variance = (sumOfSquares / times) - (mean * mean);
  double standardDeviation = sqrt(variance);

  cout<<"Mean: "<< mean << endl;
  cout<<"standardDeviation: "<< standardDeviation << endl;

 return 0;
}


