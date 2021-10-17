#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        int odd = 0;
        int even = 0;
        for(int i = 0; i < 2 * n; ++i){
            int k;
            cin >> k;
            if(k % 2 == 0) ++even;
            else ++odd;
        }
        if(odd == even) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}