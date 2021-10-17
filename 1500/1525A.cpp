#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;
    if(a == b) return a;
    if(a == 1 || b == 1) return 1;
    if(a > b) return gcd(a % b, b);
    return gcd (a, b % a);
}

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n;
        cin >> n;
        
        int k = gcd(n, 100);
        cout << 100 / k << endl;
    }
    
    return 0;
}