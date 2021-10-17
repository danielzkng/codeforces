#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        int n;
        cin >> n;
        
        int f2 = 0;
        int f3 = 0;
        while(n % 2 == 0){
            n /= 2;
            f2++;
        }
        while(n % 3 == 0){
            n /= 3;
            f3++;
        }
        
        if(n != 1) cout << -1 << "\n";
        else{
            if(f2 > f3) cout << -1 << "\n";
            else{
                cout << 2 * f3 - f2 << "\n";
            }
        }
    }
    
    return 0;
}