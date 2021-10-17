#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int a, b;
        cin >> a >> b;
        
        if(a == b){
            cout << 0 << "\n";
        }
        else if(a > b){
            if(a % 2 == b % 2) cout << 1 << "\n";
            else cout << 2 << "\n";
        }
        else{
            if(a % 2 == b % 2) cout << 2 << "\n";
            else cout << 1 << "\n";
        }
    }
    
    return 0;
}