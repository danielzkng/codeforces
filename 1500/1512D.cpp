#include <iostream>
#include <map>
#define ll long long

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int zzz = 0; zzz < cases; zzz++){
        ll len;
        cin >> len;
        
        ll sum = 0;
        ll arr[len + 2];
        for(ll i = 0; i < len + 2; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        
        map<ll, ll> m;
        for(ll i = 0; i < len + 2; i++){
            ll without = sum - arr[i];
            if(m.count(without) == 0) m[without] = 1;
            else m[without]++;
        }
        
        ll sol = -1;
        
        for(ll i = 0; i < len + 2; i++){
            if(m.count(arr[i] * 2) != 0){
                if(m[arr[i] * 2] > 1 || sum - arr[i] != 2 * arr[i]){
                    sol = arr[i];
                    break;
                }
            }
        }
        
        ll sol2 = sum - (2 * sol);
        
        bool first = true;
        bool second = true;
        
        if(sol == -1){
            cout << -1 << endl;
        }
        else{
            for(ll i = 0; i < len + 2; i++){
                if(first && arr[i] == sol) first = false;
                else if(second && arr[i] == sol2) second = false;
                else cout << arr[i] << " ";
            }
            cout << endl;
        }
    
    }
    
    return 0;
}