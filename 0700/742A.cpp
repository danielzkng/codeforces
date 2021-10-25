#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter) {
        int k;
        cin >> k;
        cout << (k % 4 == 0 ? "YES" : "NO") << "\n";
    }
    return 0;
}