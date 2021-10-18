#include <bits/stdc++.h>
#define ll long long

using namespace std;

int pattern(ll x) {
    int out = 0;
    int place = 1;
    while (x > 0) {
        int next = x % 10;
        next %= 2;
        out += place * next;
        place *= 2;
        x /= 10;
    }
    return out;
}

int main(){
    map<int, int> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        char c;
        cin >> c;
        if(c == '+') {
            ll k;
            cin >> k;
            int y = pattern(k);
            if(m.count(y) == 0) {
                m.insert(pair<int, int>(y, 1));
            }
            else m[y]++;
        }
        if(c == '-') {
            ll k;
            cin >> k;
            int y = pattern(k);
            m[y]--;
        }
        if(c == '?') {
            ll k;
            cin >> k;
            int y = pattern(k);
            if(m.count(y) == 0) cout << 0 << "\n";
            else cout << m[y] << "\n";
        }
    }
    
    return 0;
}