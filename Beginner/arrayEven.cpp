#include <iostream>
using namespace std;

int main()
{
    const int size = 6;
    int nums[size] = {1, 2, 3, 4, 5, 6};
    int dNums[size];

    for (int i = 0; i <size; ++i)
    {
        if (i % 2 == 0)
        {
            dNums[i] = nums[i] * 2;
        }
        else
        {
            dNums[i] = nums[i];
        }
    }

    cout << "Original array (nums): ";
    for (int i = 0; i < size; ++i)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    
            cout
        << "Modified array (dNums): ";
    for (int i = 0; i < size; ++i)
    {
        cout << dNums[i] << " ";
    }
    cout << endl;

    return 0;
}
