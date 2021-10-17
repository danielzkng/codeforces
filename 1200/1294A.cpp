#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        long long a, b, c, n;
        cin >> a >> b >> c >> n;
        
        long long max = a;
        if(b > max) max = b;
        if(c > max) max = c;
        
        long long fill = 3 * max - (a + b + c);
        
        if(n >= fill && (n - fill) % 3 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}