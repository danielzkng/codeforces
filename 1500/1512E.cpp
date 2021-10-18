#include <iostream>
#include <set>
#define ll long long

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int zzz = 0; zzz < cases; zzz++){
        ll n, l, r, s;
        cin >> n >> l >> r >> s;
        
        ll len = r - l + 1;
        ll min = (len * (len + 1)) / 2;
        ll max = ((len * (len + 1)) / 2) + ((n - len) * len);
        
        if(min <= s && s <= max){
            //find permutation, output it
            ll nums[len];
            ll boost = (s - min) / len;
            ll topBoost = (s - min) % len;
            
            for(ll i = 0; i < len; i++){
                nums[i] = i + 1 + boost;
                if(len - i <= topBoost) nums[i]++;
            }
            
            set<ll> s;
            for(ll i = 0; i < len; i++){
                s.insert(nums[i]);
            }
            
            ll out[n + 1];
            for(ll i = 0; i < n + 1; i++){
                out[i] = -1;
                if(l <= i && i <= r){
                    out[i] = nums[i - l];
                }
            }
            ll curr = 1;
            for(ll i = 1; i < n + 1; i++){
                if(out[i] == -1){
                    while (s.count(curr) > 0) curr++;
                    out[i] = curr;
                    curr++;
                }
            }
            
            for(ll i = 1; i < n + 1; i++){
                cout << out[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}