#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        long long a, b, n, s;
        cin >> a >> b >> n >> s;
        long long max = a * n + b;
        
        if(s > max || s % n > b) cout << "NO\n";
        else cout << "YES\n";
    }
    
    return 0;
}