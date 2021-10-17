#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int len;
        cin >> len;
        
        int zeroes = 0;
        int sum = 0;
        
        for(int i = 0; i < len; ++i){
            int k;
            cin >> k;
            sum += k;
            if(k == 0) zeroes++;
        }
        
        int out = zeroes;
        
        sum += zeroes;
        if(sum == 0) out++;
        cout << out << "\n";
    }
    
    return 0;
}