#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = (a); i < (b); ++i)

using namespace std;

string s;

int order(int lo, int hi) {
    // cerr << lo << " " << hi << "\n";
    if(lo == hi) return 0;
    int level = 0;
    int i;
    bool has_arrows = false;
    for(i = lo; i < hi; ++i) {
        if(s[i] == '(') ++level;
        if(s[i] == ')') --level;
        if(s[i] == '-') has_arrows = true;
        if(level == 0) {
            // ++i;
            break;
        }
    }
    if(i == hi - 1 && has_arrows) return order(lo + 1, hi - 1);
    if(i == hi - 1 && !has_arrows) return 0;
    
    int left = order(lo + 1, i);
    int right = order(i + 3, hi);
    return (left + 1 > right ? left + 1 : right);
}

int main(){
    cin >> s;
    cout << order(0, s.length()) << "\n";
    return 0;
}