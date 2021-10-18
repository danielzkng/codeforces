#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = (a); i < (b); ++i)
#define MOD 1000000007

using namespace std;

ll factorials[1001];
ll invfacts[1001];
vector<int> ones;

int bitcount(int x) {
    int k = 0;
    while(x != 0) {
        k += x % 2;
        x /= 2;
    }
    return k;
}

ll binom(int n, int r){ 
    // cout << "binom " <<  n << " " << r << "\n";
    if(r > n) return 0;
    ll out = factorials[n];
    out *= invfacts[r];
    out %= MOD;
    out *= invfacts[n - r];
    out %= MOD;
    // cout << out << "\n";
    return out;
}

// b is number of digits, a is index into ones
ll grab(int a, int b) {
    // cout << "grab" << " " << a << " " << b << "\n";
    if(b == 0) return 1;
    if(a >= ones.size()) {
        if(b == 0) return 1;
        else return 0;
    }
    if(b > ones[a]) return 0;
    int digs = ones[a]; // digits to play with
    return (binom(digs - 1, b) + grab(a + 1, b - 1)) % MOD;
}

int main(){
    string s;
    cin >> s;
    int k;
    cin >> k;

    if(k == 0) {
        cout << 1 << "\n";
        return 0;
    }
    if(k == 1) {
        cout << s.length() - 1 << "\n";
        return 0;
    }

    int to[1001];
    for(int i = 1; i < 1001; ++i) {
        if(i == 1) to[i] = 0;
        else to[i] = to[bitcount(i)] + 1;
    }

    factorials[0] = 1;
    for(int i = 1; i < 1001; ++i) {
        factorials[i] = (factorials[i - 1] * i) % MOD;
    }

    invfacts[1000] = 52180388;
    for(int i = 999; i >= 0; --i) {
        invfacts[i] = (invfacts[i + 1] * (i + 1)) % MOD;
    }

    int digits = s.length();

    for(int i = 0; i < s.length(); ++i) {
        if (s[i] == '1') ones.push_back(s.length() - i);
    }

    ll total = 0;
    for(int i = 1; i < 1001; ++i) {
        if(to[i] == k - 1) {
            // cout << i << " " << grab(0, i) << "\n";
            // count number under n
            total += grab(0, i);
            total %= MOD;
        }
    }
    cout << total << "\n";

    return 0;
}