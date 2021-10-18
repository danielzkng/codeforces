#include <iostream>
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        ll a, b, c;
        cin >> a >> b >> c;
        cout << (c % 2) * a + (c / 2) * (a - b) << "\n";
    }
    return 0;
}