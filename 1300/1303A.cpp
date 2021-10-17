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
        
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '0') zeroes++;
        }
        
        int starting = 0;
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '0') starting++;
            else break;
        }
        
        int ending = 0;
        for(int i = s.length() - 1; i >= 0; --i){
            if(s[i] == '0') ending++;
            else break;
        }
        
        if(zeroes - starting - ending < 0) cout << 0 << "\n";
        else cout << zeroes - starting - ending << "\n";
    }
    
    return 0;
}