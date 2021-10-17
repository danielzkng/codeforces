#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        long long n;
        cin >> n;
        if(n % 2 == 1) ++n;
        n /= 2;
        long long out = 0;
        if(n <= 3) out = 3;
        else out = n;
        cout << out * 5 << "\n";
    }
    return 0;
}