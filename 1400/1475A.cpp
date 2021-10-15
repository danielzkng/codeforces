#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        long long in;
        cin >> in;
        while(in % 2 == 0) in /= 2;
        
        if (in == 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}