#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int lower = 0;
    int upper = 0;
    for(int i = 0; i < s.length(); ++i){
        if('a' <= s[i] && s[i] <= 'z') ++lower;
        if('A' <= s[i] && s[i] <= 'Z') ++upper;
    }
    if(upper > lower) {
        for(int i = 0; i < s.length(); ++i) {
            if('a' <= s[i] && s[i] <= 'z') cout << (char)(s[i] - 'a' + 'A');
            if('A' <= s[i] && s[i] <= 'Z') cout << s[i];   
        }
    }
    else {
        for(int i = 0; i < s.length(); ++i) {
            if('a' <= s[i] && s[i] <= 'z') cout << s[i];
            if('A' <= s[i] && s[i] <= 'Z') cout << (char)(s[i] - 'A' + 'a');   
        }
    }
    cout << "\n";
    return 0;
}