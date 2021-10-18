#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ones = 0, zeroes = 0;
    for(int i = 0; i < n; ++i){
        if(s[i] == 'n') ++ones;
        if(s[i] == 'z') ++zeroes;
    }
    for(int i = 0; i < ones; ++i){
        cout << 1 << " ";
    }
    for(int i = 0; i < zeroes; ++i){
        cout << 0 << " ";
    }
    return 0;
}