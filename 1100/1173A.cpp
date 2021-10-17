#include <iostream>

using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    if(x - y - z > 0) cout << "+\n";
    else if(x + z - y < 0) cout << "-\n";
    else if(z == 0 && x == y) cout << "0\n";
    else cout << "?\n";
    return 0;
}