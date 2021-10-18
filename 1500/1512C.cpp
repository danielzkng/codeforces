#include <iostream>
#include <string>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int zzz = 0; zzz < cases; zzz++){
        int a, b;
        cin >> a >> b;
        int len = a + b;
        string in;
        cin >> in;
        
        bool valid = true;
        
        if(a % 2 == 1 && b % 2 == 1){
            valid = false;
        }
        
        if((a % 2 == 1 || b % 2 == 1) && len % 2 == 0){
            valid = false;
        }
        
        int fwd[len];
        int rwd[len];
        
        for(int i = 0; i < len; i++){
            int k;
            if(in[i] == '0') k = 0;
            if(in[i] == '1') k = 1;
            if(in[i] == '?') k = -1;
            
            fwd[i] = k;
            rwd[len - i - 1] = k;
        }
        
        int unified[len];
        for(int i = 0; i < len; i++){
            if(fwd[i] == rwd[i]) unified[i] = fwd[i];
            else if(fwd[i] == -1) unified[i] = rwd[i];
            else if(rwd[i] == -1) unified[i] = fwd[i];
            else{
                valid = false;
                unified[i] = 0;
            }
        }
        
        for(int i = 0; i < len; i++){
            if(unified[i] == 0) a--;
            if(unified[i] == 1) b--;
        }
        
        if(a < 0 || b < 0) valid = false;
        
        for(int i = 0; i < (len + 1)/2; i++){
             if(unified[i] == -1){
                 if(i == (len + 1)/2 - 1 && len % 2 == 1){
                     if(a == 1) unified[i] = 0;
                     else unified[i] = 1;
                 }
                 else{
                     if(a >= 2){
                        unified[i] = 0;
                        unified[len - i - 1] = 0;
                        a -= 2;
                     }
                     else if(b >= 2){
                         unified[i] = 1;
                         unified[len - i - 1] = 1;
                         b -= 2;
                     }
                     else valid = false;
                 }
             }
        }
        
        if(valid){
            for(int i = 0; i < len; i++){
                cout << unified[i];
            }
            cout << endl;
        }
        else cout << -1 << endl;
    }
    
    return 0;
}