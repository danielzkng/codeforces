#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int a, b, c;
        cin >> a >> b >> c;
        int x = b - a;
        x *= (x > 0 ? 1 : -1);
        x *= 2;
        // x is number of ppl in circle
        if(a > x || b > x || c > x) cout << -1 << "\n";
        else cout << (c + x / 2) + (c + x/2 > x ? -x : 0) << "\n";
    }
    return 0;
}