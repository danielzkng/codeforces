#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int k;
        cin >> k;
        if(k == 1) cout << 0 << "\n";
        else if(k == 2) cout << 1 << "\n";
        else if(k == 3 || k % 2 == 0) cout << 2 << "\n";
        else cout << 3 << "\n";
    }
    return 0;
}