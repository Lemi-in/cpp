#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    char vowel[10] = {'A', 'E', 'O', 'I', 'U', 'a', 'e', 'o', 'i', 'u'};
    int totalVowel = 0;

    string name;
    cout << "Enter your fullname: ";
    getline(cin, name);

    for (int i = 0; i < name.length(); ++i) {
        for (int j = 0; j < 10; ++j) {
            if (name[i] == vowel[j]) {
                totalVowel++;
                break; 
            }
        }
    }

    cout << "Total number of vowels in your name: " << totalVowel << endl;

    return 0;
}
