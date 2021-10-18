#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i){
        long long n;
        cin >> n;
        long long x = n;
        for(long long i = 2 * n - 1; i > 0; --i){
            x *= i;
            x %= 1000000007;
        }
        cout << x << "\n";
    }
    return 0;
}