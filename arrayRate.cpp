#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string weekend[7] = {"Friday night", "Saturday morning","Saturday afternoon", "Saturday night", "Sunsday morning", "Sunday afternoon", "Sunday night"};
    int rating[7] = {60,90,80,85,92,78,89}; 
    float overAll = 0.0;

    
    for (int i = 0; i < 7; ++i) {
    cout << setw(7)<< "The day       " << setw(13) << "Rating(100%)" << endl;

    
    for (int j = 0; j < 7; ++j) {
        cout << setw(7) << weekend[j] << setw(13) << rating[j] <<"%"<< endl;
        overAll +=rating[j];

    }
       cout<<"Over all rating: "<<overAll/7<<"%"<<endl;
        cout<<'\n';
        cout<<'\n';
    for (int k = 0; k<7; ++k) {
       cout<<weekend[k];
       cout<<'\n';
    }
    return 0;
}
}
