#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        long long a, b;
        cin >> a >> b;
        
        if(b == 2) b = 4;
        
        if(b == 1) cout << "NO\n";
        else{
            cout << "YES\n";
            cout << a << " " << a * (b - 1) << " " << a * b << "\n";
        }
    }
    
    return 0;
}