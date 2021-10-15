#include <iostream>
#define ll long long

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; iter++){
        int n, k;
        cin >> n >> k;
        
        bool valid = true;
        
        ll low;
        cin >> low;
        ll high = low;
        for(int i = 1; i < n; i++){
            ll ground;
            cin >> ground;
            
            ll interval1_l = low - k + 1;
            ll interval1_h = high + k - 1;
            
            ll interval2_l = ground;
            ll interval2_h = ground + k - 1;
            
            if(interval2_l > interval1_l) low = interval2_l;
            else low = interval1_l;
            
            if(interval2_h < interval1_h) high = interval2_h;
            else high = interval1_h;
            
            if(low > high) valid = false;
            
            if(i == n - 1){
                if(ground < low || ground > high) valid = false;
            }
            
        }
        
        if(valid){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
    
    
    return 0;
}