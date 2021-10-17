#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n;
        cin >> n;
        
        bool all_even = true;
        bool all_odd = true;
        for(int i = 0; i < n; ++i){
            int k;
            cin >> k;
            if(k % 2 == 0) all_odd = false;
            else all_even = false;
        }
        
        if(all_even || (n % 2 == 0) && all_odd) cout << "NO\n";
        else cout << "YES\n";
    }
    
    return 0;
}