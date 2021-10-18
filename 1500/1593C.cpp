#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter) {
        int n, m;
        cin >> n >> m;
        vector<int> ds;
        for(int i = 0; i < m; ++i) {
            int x;
            cin >> x;
            ds.push_back(n - x);
        }
        sort(ds.begin(), ds.end());
        
        vector<int> ps;
        int acc = 0;
        for(int i = 0; i < m; ++i) {
            acc += ds[i];
            ps.push_back(acc);
        }
        
        // number up to n - 1
        long long hi = m;
        long long lo = 0;
        while(hi - lo > 1) {
            long long mid = (lo + hi) >> 1;
            if(ps[mid] == n) {
                lo = mid - 1;
                hi = mid;
                break;
            }
            if(ps[mid] < n) lo = mid;
            else hi = mid;
        }
        cout << lo + 1 << "\n";
    }
    return 0;
}