#include <iostream>
using namespace std;
int main()
{
    int count;
    int nums;

    cout << " Enter how many numbers you want to input? " << endl;
    cin >> count;
    

    for (int i = 1; i <= count; ++i)
    {
        cout<<"Enter number: "<<i<<endl;
        cin >> nums;
    }
    cout << "The numbers are " << endl;
    for (int i = 1; i <= count; ++i)
    {
        cout << nums << endl;
    }

    cout << "\n";
    return 0;
}
