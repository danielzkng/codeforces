#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int pos = 0;
    int neg = 0;
    for(int i = 0; i < n; ++i){
        int k;
        cin >> k;
        if(k < 0) ++neg;
        if(k > 0) ++pos;
    }
    if(pos >= n / 2 + n % 2) cout << "251\n";
    else if(neg >= n / 2 + n % 2) cout << "-213\n";
    else cout << "0\n";
    return 0;
}