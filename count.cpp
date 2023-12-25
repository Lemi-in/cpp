#include <iostream>
using namespace std;
int main(){
    int sum = 0, number, n, count = 1;
    cout<< "How many numbers: ";
    cin >> n;
    while( count <= n){
        cout<< "Enter a number: ";
        cin >> number;
        if(number % 3 != 0 && number % 7 != 0){
            sum += number;
        }
    count++;
    }
    cout << sum;
    return 0;
}