#include <iostream>
#include <algorithm>

// STAN TWICE FOR NO BUGS

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter) {
        int k;
        cin >> k;
        int m = -1;
        while(k != 0){
            m = max(m, k % 10);
            k /= 10;
        }
        cout << max(m, 1) << "\n";
    }
    return 0;
}