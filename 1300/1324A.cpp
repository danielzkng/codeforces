#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n;
        cin >> n;
        int x;
        cin >> x;
        int mod = x % 2;
        bool valid = true;
        for(int i = 1; i < n; ++i){
            cin >> x;
            if(x % 2 != mod) valid = false;
        }
        if(valid) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}