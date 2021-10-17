#include <iostream>

using namespace std;

int main(){
    int k;
    cin >> k;
    if(k % 2 == 0) cout << k + 4 << " 4\n";
    else cout << k + 9 << " 9\n";
    return 0;
}