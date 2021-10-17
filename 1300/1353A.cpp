#include <iostream>

using namespace std;

int main(){
    int k;
    cin >> k;
    for(int iter = 0; iter < k; ++iter){
        int n, x;
        cin >> n >> x;
        if(n == 1) cout << "0\n";
        else if(n == 2) cout << x << "\n";
        else cout << 2 * x << "\n";
    }
    return 0;
}