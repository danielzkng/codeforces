#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 2 == 0){
        long long x = n/2;
        long long k = 0x01L << x;
        cout << k << "\n";
    }
    else cout << "0\n";
    return 0;
}