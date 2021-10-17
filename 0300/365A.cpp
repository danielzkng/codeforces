#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int res = 0;
    bool has[k + 1];
    for(int i = 0; i < n; ++i){
        int a;
        cin >> a;
        for(int j = 0; j < k + 1; ++j){
            has[j] = false;
        }
        while(a > 0) {
            int dig = a % 10;
            if(dig <= k) {
                has[dig] = true;
            }
            a /= 10;
        }
        bool out = true;
        for(int j = 0; j < k + 1; ++j){
            out = out && has[j];
        }
        if(out) ++res;
    }
    cout << res << "\n";
    return 0;
}