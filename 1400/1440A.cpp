#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int len, z, o, c;
        cin >> len >> z >> o >> c;
        string s;
        cin >> s;
        int ones = 0;
        int zeroes = 0;
        for(int i = 0; i < len; ++i){
            if(s[i] == '1') ++ones;
            else ++zeroes;
        }
        if(z > c + o) {
            cout << len * o + c * zeroes << "\n";
        } else if(o > z + c) {
            cout << len * z + c * ones << "\n";
        } else {
            cout << zeroes * z + ones * o << "\n";
        }
    }
    return 0;
}