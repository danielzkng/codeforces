#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if(b >= a) cout << b << "\n";
        else{
            long long next = a - b;
            if(d >= c) cout << "-1\n";
            else{
                long long amtper = c - d;
                long long intervals = next / amtper;
                if(next % amtper != 0) intervals++;
                
                cout << b + intervals * c << "\n";
            }
        }
        
    }
    
    return 0;
}