#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter) {
        int a, b, c;
        cin >> a >> b >> c;
        int total = 0;
        if(a > 0) {
            ++total;
            --a;
        }
        if(b > 0) {
            ++total;
            --b;
        }
        if(c > 0) {
            ++total;
            --c;
        }
        if(a >= 3 && b >= 3 && c >= 3) {
            cout << total + 4 << "\n";
            continue;
        }
        if(a >= 2 && b >= 2 && c >= 2) {
            cout << total + 3 << "\n";
            continue;
        }
        if((a >= 2 || b >= 2 || c >= 2) && (a >= 1 && b >= 1 && c >= 1)) {
            cout << total + 2 << "\n";
            continue;
        }
        if((a >= 1 && (b >= 1 || c >= 1)) || (b >= 1 && c >= 1)) {
            cout << total + 1 << "\n";
            continue;
        }
        cout << total << "\n";
    }
}