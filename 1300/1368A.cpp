#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter) {
        int a, b, x;
        cin >> a >> b >> x;
        int total = 0;
        while(a <= x && b <= x) {
            if(a < b) {
                a += b;
                ++total;
            }
            else {
                b += a;
                ++total;
            }
        }
        cout << total << "\n";
    }
    return 0;
}