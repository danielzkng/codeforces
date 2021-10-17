#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int x, y;
        cin >> x >> y;
        if(x == y) {
            cout << 2 * x << "\n";
        } else {
            cout << 2 * max(x, y) - 1 << "\n";
        }
    }
    return 0;
}