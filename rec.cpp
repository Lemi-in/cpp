#include <iostream>
using namespace std;
int main(){
    int count = 0;

    for (int i = 10; i<=49; ++i){
           cout<<i<<" ";

           if(count % 10 == 9){
            cout<<"\n";
           }
       count++;
                
        
    }
          
}
