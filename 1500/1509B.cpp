#include <iostream>
#include <string>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; ++iter){
        int x;
        cin >> x;
        string s;
        cin >> s;
        
        int ts = 0;
        int ms = 0;
        
        bool valid = true;
        
        for(int i = 0; i < x; i++){
            if(s[i] == 'T') ts++;
            else if (s[i] == 'M') ms++;
            if (ms > ts) valid = false;
        }
        
        ts = 0;
        ms = 0;
        
        for(int i = x - 1; i >= 0; i--){
            if(s[i] == 'T') ts++;
            else if (s[i] == 'M') ms++;
            if (ms > ts) valid = false;
        }
        
        if(s[x - 1] == 'M') valid = false;
        if(ts != 2 * ms) valid = false;
        
        if(valid) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}