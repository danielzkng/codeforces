#include <iostream>
#include <string>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int zzz = 0; zzz < cases; zzz++){
        string input;
        cin >> input;
        
        int prev = 0;
        bool valid = true;
        bool ones = false;
        for(int i = 0; i < input.length(); i++){
            if(input[i] == '0'){
                if(prev == 0 && ones){
                    valid = false;
                }
                
                prev = 0;
            }
            else{
                //1 case
                if(prev == 1) ones = true;
                prev = 1;
            }
        }
        
        if(valid) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}