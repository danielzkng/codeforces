#include <iostream>

using namespace std;

int main(){
    long long m, n, a;
    cin >> m >> n >> a;
    cout << (m / a + (m % a == 0 ? 0 : 1)) * (n / a + (n % a == 0 ? 0 : 1)) << "\n";
    return 0;
}