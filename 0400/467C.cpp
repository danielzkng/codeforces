#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m, k;
    cin >> n >> m >> k;
    ll x[n];
    for(int i = 0; i < n; ++i){
        cin >> x[i];
    }
 
    ll f[n - m + 1];
    ll tally = 0;
    for(int i = 0; i < m; ++i) {
        tally += x[i];
    }
    for(int i = 0; i < n - m + 1; ++i) {
        f[i] = tally;
        tally -= x[i];
        tally += x[i + m];
    }
 
    ll total[n - m + 1];
    // int segs[n - m + 1];
 
    for(int i = 0; i < n - m + 1; ++i) {
        total[i] = f[i];
        // segs[i] = 1;
    }
    
    for(int i = 2; i <= k; ++i){
        ll nver[n - m + 1];
 
        ll running_max = total[0];
        ll best = total[0];
 
        for(int i = 0; i < m; ++i){
            nver[i] = running_max;
        }
        for(int j = m; j < n - m + 1; ++j) {
            if(running_max < total[j - m]) {
                running_max = total[j - m];
            }
            best = max(best, running_max + f[j]);
            nver[j] = max(best, total[j]);
        }
        for(int j = 0; j < n - m + 1; ++j) total[j] = nver[j];
    }
 
 
    // for(int i = 0; i < n - m + 1; ++i){
    //     cout << total[i] << " ";
    // }
    // cout << "\n";
    // for(int i = 0; i < n - m + 1; ++i){
    //     cout << segs[i] << " ";
    // }
    // cout << "\n";
 
    ll max = 0;
    for(int i = 0; i < n - m + 1; ++i){
        if(total[i] > max) max = total[i]; 
    }
    cout << max << "\n";
 
    return 0;
}