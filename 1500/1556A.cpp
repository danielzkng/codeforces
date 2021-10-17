#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int a, b;
        cin >> a >> b;
        if(a == 0 && b == 0) cout << "0\n";
        else if(a == b) cout << "1\n";
        else cout << (a % 2 == b % 2 ? 2 : -1) << "\n";
    }
    return 0;
}