#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        long long n;
        cin >> n;
        long long sum = 0;
        for(long long i = 0; i < n; ++i){
            long long k;
            cin >> k;
            sum += k;
        }
        int mod = sum % n;
        cout << mod * (n - mod) << "\n";
    }
    return 0;
}