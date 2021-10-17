#include <iostream>
#include <string>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        string s;
        cin >> s;
        int zeroes = 0;
        int ones = 0;
        
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '0') zeroes++;
            else ones++;
        }
        
        int min = zeroes;
        if(ones < zeroes) min = ones;
        
        if(min % 2 == 0) cout << "NET\n";
        else cout << "DA\n";
    }
}