#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; ++iter){
        int a, b;
        cin >> a >> b;
        if(a < b){
            int c = a;
            a = b;
            b = c;
        }
        
        int max = a;
        if(2 * b > a) max = 2 * b;
        
        cout << max * max << "\n";
    }
    
    return 0;
}