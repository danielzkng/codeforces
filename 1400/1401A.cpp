#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; ++iter){
        int n, k;
        cin >> n >> k;
        if(n < k){
            cout << k - n << "\n";
        }
        else{
            if(n % 2 == k % 2) cout << 0 << "\n";
            else cout << 1 << "\n";
        }
    }
    
    return 0;
}