#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

long long choose_2(ll x) {
    return (x * (x - 1)) / 2;
}

ll gcd(ll a, ll b) {
    if(a == 0) return b;
    if(b == 0) return a;
    if(a > b) return gcd(a % b, b);
    return gcd(a, b % a);
}

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter) {
        int n;
        cin >> n;
        vector<ll> evens;
        vector<ll> odds;
        for(int i = 0; i < n; ++i) {
            ll x;
            cin >> x;
            if(x % 2 == 0) evens.push_back(x);
            else odds.push_back(x);
        }
        
        ll total = (evens.size() * odds.size()) + choose_2(evens.size());
        
        for(int i = 0; i < odds.size(); ++i) {
            for(int j = i + 1; j < odds.size(); ++j) {
                if(gcd(odds[i], odds[j]) > 1) ++total;
            }
        }
        cout << total << "\n";
    }
    return 0;
}