#include <iostream>
#include <string>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int len;
        cin >> len;
        string s;
        cin >> s;
        
        bool used[26];
        for(int i = 0; i < 26; ++i){
            used[i] = false;
        }
        
        bool valid = true;
        char current = ' ';
        
        for(int i = 0; i < len; ++i){
            if(s[i] != current){
                current = s[i];
                if(used[current - 'A']){
                    valid = false;
                    break;
                }
                else{
                    used[current - 'A'] = true;
                }
            }
        }
        
        if(valid) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}