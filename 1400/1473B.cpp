#include <iostream>
#include <string>

using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;
    if(a == 1 || b == 1) return 1;
    if(a == b) return a;
    if(a > b) return gcd(a % b, b);
    return gcd(a, b % a);
}

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; iter++){
        string a, b;
        cin >> a >> b;
        
        int l1 = a.length();
        int l2 = b.length();
        
        int lcm = (l1 * l2) / (gcd(l1, l2));
        
        string s1 = "";
        for(int i = 0; i < lcm / l1; i++){
            s1 += a;
        }
        
        string s2 = "";
        for(int i = 0; i < lcm / l2; i++){
            s2 += b;
        }
        
        if(s1 == s2) cout << s1 << endl;
        else cout << -1 << endl;
    }
    
    return 0;
}