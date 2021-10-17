#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter) {
        int a, b;
        cin >> a >> b;
        int base = a - 1;
        int k = 0;
        switch(base % 4) {
            case 0:
                k = base;
                break;
            case 1:
                k = 1;
                break;
            case 2:
                k = base + 1;
                break;
            default:
                k = 0;
        }
        
        // cout << a << " " << b << " " << k << "\n";
        
        if(b == k) cout << a << "\n";
        else if(a == (b ^ k)) cout << a + 2 << "\n";
        else cout << a + 1 << "\n";
    }
}