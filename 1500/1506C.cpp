#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int zzz = 0; zzz < cases; zzz++){
        string a, b;
        cin >> a >> b;
        
        int min_len = min(a.length(), b.length());
        
        int total = a.length() + b.length();
        
        bool done = false;
        
        for(int i = min_len; i >= 0; i--){
            for(int j = 0; j < a.length() - i + 1; j++){
                for(int k = 0; k < b.length() - i + 1; k++){
                    if(a.substr(j, i) == b.substr(k, i)){
                        cout << total - 2 * i << endl;
                        done = true;
                        break;
                    }
                }
                
                if(done) break;
            }
            if(done) break;
        }
    }
    
    
    return 0;
}