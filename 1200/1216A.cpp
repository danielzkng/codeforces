#include <iostream>
#include <string>

using namespace std;

int main(){
    int len;
    cin >> len;
    string s;
    cin >> s;
    
    string out = "";
    int ops = 0;
    
    for(int i = 0; i < len / 2; ++i){
        if(s[2 * i] == s[2 * i + 1]){
            ops++;
            out += "ab";
        }
        else{
            out += s[2 * i];
            out += s[2 * i + 1];
        }
    }
    
    cout << ops << "\n" << out << "\n";
    
    return 0;
}