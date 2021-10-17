#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; ++iter){
        int n;
        cin >> n;
        
        int h[n];
        for(int i = 0; i < n; ++i){
            cin >> h[i];
        }
        
        for(int i = 0; i < n; ++i){
            if(h[i] % 2 == 0) cout << h[i] << " ";
        }
        for(int i = 0; i < n; ++i){
            if(h[i] % 2 == 1) cout << h[i] << " ";
        }
        
        cout << "\n";
    }
    
    return 0;
}