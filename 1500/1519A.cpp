#include <iostream>
#define ll long long

using namespace std;

int main(){
    ll cases;
    cin >> cases;
    for(ll iter = 0; iter < cases; ++iter){
        ll a, b, d;
        cin >> a >> b >> d;
        
        //make a <= b
        if(a > b){
            ll temp = a;
            a = b;
            b = temp;
        }
        
        ll packets = a;
        ll diff = b - a;
        if(diff > packets * d) cout << "NO\n";
        else cout << "YES\n";
    }
    
    return 0;
}