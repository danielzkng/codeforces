#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        int a, b, c;
        cin >> a >> b >> c;
        
        long long cards = 1;
        
        while(a % 2 == 0){
            cards *= 2;
            a /= 2;
        }
        while(b % 2 == 0){
            cards *= 2;
            b /= 2;
        }
        
        if (cards >= c) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}