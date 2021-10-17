#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    for(int iter = 0; iter < t; ++iter){
        int n, m, i, j;
        cin >> n >> m >> i >> j;
        if((i == n && j == m) || (i == 1 && j == 1))
            cout << "1 " << m << " " << n << " 1\n";
        else cout << n << " " << m << " 1 1\n";
    }
    return 0;
}