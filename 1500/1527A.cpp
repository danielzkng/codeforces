#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n;
        cin >> n;
        
        int pow = 1;
        while(pow - 1 < n){
            pow *= 2;
        }
        pow /= 2;
        cout << pow - 1 << "\n";
    }
    
    return 0;
}