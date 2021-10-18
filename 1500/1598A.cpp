#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter) {
        int k;
        cin >> k;
        string a, b;
        cin >> a >> b;
        bool ok = true;
        for(int i = 0; i < k; ++i) {
            if(a[i] == '1' && b[i] == '1') {
                ok = false;
                break;
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}