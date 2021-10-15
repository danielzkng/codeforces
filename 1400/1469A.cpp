#include <iostream>
#include <string>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; iter++){
        string in;
        cin >> in;
        
        bool viable = true;
        int min = 0;
        int max = 0;
        
        if(in.length() % 2 == 1 || in[in.length() - 1] == '('){
            cout << "NO" << endl;
        }
        else{
            for(int i = 0; i < in.length(); i++){
                
                if(in[i] == '?'){
                    min--;
                    max++;
                }
                else if(in[i] == '('){
                    min++;
                    max++;
                }
                else{
                    min--;
                    max--;
                }
                if(max < 0) viable = false;
            }
            
            if(viable) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
    return 0;
}