#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool prev_vowel = false;
    for(int iter = 0; iter < n; ++iter){
        char c;
        cin >> c;
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            if(!prev_vowel) cout << c;
            prev_vowel = true;
        }
        else{
            cout << c;
            prev_vowel = false;
        }
    }
    return 0;
}