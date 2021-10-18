#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = (a); i < (b); ++i)

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(b == a) {
        if (a == 0) cout << 1 << "\n";
        else cout << 0 << "\n";
        return 0;
    }
    if(b > a) {
        if(b - a < a) cout << 0 << "\n";
        else cout << b + 1 << "\n";
        return 0;
    }
    if(b < a) {
        if(b > 0) cout << 0 << "\n";
        else cout << 2 * a + 1 << "\n";
    }
    return 0;
}