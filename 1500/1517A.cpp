#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; ++iter){
        long long k;
        cin >> k;
        
        if(k % 2050 != 0) cout << -1 << "\n";
        else{
            k /= 2050;
            int x = 0;
            while(k > 0){
                x += k % 10;
                k /= 10;
            }
            
            cout << x << "\n";
        }
    }
    
    return 0;
}