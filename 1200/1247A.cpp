#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(a - b == 0) cout << a << "0 " << b << "1\n";
    else if(b - a == 1) cout << a << "9 " << b << "0\n";
    else if(a - b == 8) cout << a << "9 " << b << "00\n";
    else cout << "-1\n";
    return 0;
}