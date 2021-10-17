#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; iter++){
        int n;
        cin >> n;
        
        if(n > 45){
            cout << -1 << endl;
            continue;
        }
        
        int out[10];
        for(int i = 0; i < 10; i++){
            out[i] = 0;
        }
        
        int c = 9;
        
        while(n != 0){
            if(out[c] == c){
                c--;
            }
            n--;
            out[c]++;
        }
        
        for(int i = c; i < 10; i++){
            cout << out[i];
        }
        
        cout << endl;
    }
}