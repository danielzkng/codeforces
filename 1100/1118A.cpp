#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        long long n, a, b;
        cin >> n >> a >> b;
        if(2 * a <= b) {
            cout << a * n << "\n";
        } else {
            cout << (n / 2) * b + (n % 2) * a << "\n";
        }
    }
    return 0;
}