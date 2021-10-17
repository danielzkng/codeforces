#include <iostream>

using namespace std;

int main(){
    int k;
    cin >> k;
    for(int iter = 0; iter < k; ++iter){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a > c && a > d && b > d && b > c) cout << "NO\n";
        else if(a < c && a < d && b < d && b < c) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}