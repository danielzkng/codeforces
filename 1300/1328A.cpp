#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        long long a, b;
        cin >> a >> b;
        long long x = a % b;
        if(x == 0) cout << 0 << "\n";
        else cout << b - x << "\n";
    }
    
    return 0;
}