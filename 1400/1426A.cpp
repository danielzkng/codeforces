#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int i = 0; i < cases; ++i){
        int n, x;
        cin >> n >> x;
        
        int ans;
        if(n == 1 || n == 2) ans = 1;
        else{
            n -= 2;
            ans = n / x + 1;
            
            if(n % x != 0) ans++;
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}