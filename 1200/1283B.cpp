#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n, k;
        cin >> n >> k;
        
        int max_mod = k / 2;
        if(n % k <= max_mod) cout << n << "\n";
        else{
            int out = k * (n / k);
            out += max_mod;
            cout << out << "\n";
        }
    }
    
    return 0;
}