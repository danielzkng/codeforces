#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main(){
    ll n, x;
    cin >> n >> x;
    ll prices[n];
    ll k = 0;
    for(int i = 0; i < n; ++i){
        cin >> prices[i];
        k += prices[i];
    }
    k += (n * n * (n + 1)) / 2;
    if(k <= x) {
        cout << n << " " << k << "\n";
        return 0;
    }
    
    ll lo = -1;
    ll min_lo;
    ll hi = n;
    while(lo + 1 < hi) {
        ll mid = (lo + hi) >> 1;
        vector<ll> v;
        for(int i = 0; i < n; ++i){
            v.push_back(prices[i] + (i + 1) * mid);
        }
        sort(v.begin(), v.end());

        ll sum = 0;
        for(int i = 0; i < mid; ++i){
            sum += v[i];
        }
        if(sum <= x) {
            lo = mid;
            min_lo = sum;
        }
        else hi = mid;
    }
    cout << lo << " " << min_lo << "\n";
    return 0;
}