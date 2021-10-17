#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int a, b;
        cin >> a >> b;
        if(a == 2 && b == 2 || a == 1 || b == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}