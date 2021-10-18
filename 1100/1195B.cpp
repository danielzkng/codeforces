#include <iostream>
#define ll long long

using namespace std;

int main(){
    ll n, k;
    cin >> n >> k;
    ll hi = n;
    ll lo = -1;
    if((n * (n + 1)) / 2 == k) {
        cout << 0 << "\n";
        return 0;
    }
    while(lo + 1 < hi) {
        ll mid = (lo + hi) >> 1;
        ll new_k = (mid * (mid + 1)) / 2 - n + mid;
        if(new_k == k) {
            cout << n - mid << "\n";
            return 0;
        }
        if(new_k < k) lo = mid;
        else hi = mid;
    }
    return 0;
}
