#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        bool used[n + 1];
        for(int i = 0; i <= n; ++i){
            used[i] = false;
        }
        int buf = -1;
        bool out = false;
        for(int i = 0; i < n; ++i){
            int x;
            cin >> x;
            if(used[x]) out = true;
            if(buf != -1) used[buf] = true;
            buf = x;
        }
        if(out) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}