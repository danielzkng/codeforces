#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; ++iter){
        int n, x;
        cin >> n >> x;
        long long min = 0;
        long long max = 0;
        for(int i = 0; i < n; ++i){
            long long in;
            cin >> in;
            
            min += in;
            max += in / x;
            if(in % x != 0) ++max;
        }
        
        if(min % x == 0) min /= x;
        else{
            min /= x;
            min++;
        }
        
        cout << min << " " << max << "\n";
    }
    
    return 0;
}