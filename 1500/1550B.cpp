#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter) {
        int n, a, b;
        string s;
        cin >> n >> a >> b;
        cin >> s;
        if(b >= 0) {
            cout << (a + b) * n << "\n";
        } else {
            int ones = 0;
            int zeroes = 0;
            char last = 'a';
            for(int i = 0; i < n; ++i){
                if(s[i] == '1' && last != '1') {
                    last = '1';
                    ++ones;
                }
                else if(s[i] == '0' && last != '0') {
                    last = '0';
                    ++zeroes;
                }
            }
            cout << min(ones, zeroes) * b + b + a * n << "\n";
        }
    }
    return 0;
}