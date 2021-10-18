#include <iostream>

using namespace std;

int cdiv(int a, int b) {
    return (a / b) + (a % b == 0 ? 0 : 1);
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        long long x, y;
        cin >> x >> y;
        long long target_factor, mod;
        if(x >= y) {
            target_factor = x / y;
            mod = x % y;
        }
        else {
            target_factor = y / x;
            mod = y % x;
        }
        if(mod != 0) { cout << "-1\n"; continue; }
        int count = 0;
        while(target_factor % 2 == 0) {
            target_factor /= 2;
            ++count;
        }
        if(target_factor == 1) cout << cdiv(count, 3) << "\n";
        else cout << "-1\n";
    }
    return 0;
}