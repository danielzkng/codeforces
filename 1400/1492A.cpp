#include <iostream>
#include <algorithm>
 
using namespace std; 
 
int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        long long p, a, b, c;
        cin >> p >> a >> b >> c;
        
        long long x = a - (p % a);
        long long y = b - (p % b);
        long long z = c - (p % c);
        
        if(x == a) x = 0;
        if(y == b) y = 0;
        if(z == c) z = 0;
        
        cout << min(min(x, y), z) << endl;
    }
    
    return 0;
    
}