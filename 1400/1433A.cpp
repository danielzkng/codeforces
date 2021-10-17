#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int in;
        cin >> in;
        int k = in % 10;
        int out = 10 * (k - 1);
        
        int digits = 0;
        while(in > 0){
            digits++;
            in /= 10;
        }
        
        out += digits * (digits + 1) / 2;
        
        cout << out << "\n";
    }
    
    return 0;
}