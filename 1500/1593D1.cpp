#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if(a == 0) return b;
    if(b == 0) return a;
    if(a > b) return gcd(a % b, b);
    return gcd(a, b % a);
}

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter) {
        int min = 99999999;
        int n;
        cin >> n;
        vector<int> x;
        for(int i = 0; i < n; ++i) {
            int k;
            cin >> k;
            if(k < min) min = k;
            x.push_back(k);
        }
        for(int i = 0; i < n; ++i) {
            x[i] -= min;
        }
        int acc = x[0];
        for(int i = 1; i < n; ++i) {
            acc = gcd(acc, x[i]);
        }
        if(acc == 0) acc = -1;
        cout << acc << "\n";
    }
    return 0;
}