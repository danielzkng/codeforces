#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int m, n;
        cin >> n >> m;
        bool good = false;
        for(int i = 0; i < n; ++i){
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            good = good || (b == c);
        }
        if(good && m % 2 == 0) cout << "YES\n\n";
        else cout << "NO\n\n";
    }
    return 0;
}