#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n;
        cin >> n;
        
        int min1, min2, max;
        min1 = -1;
        min2 = -1;
        max = -1;
        for(int i = 0; i < n; ++i){
            if(min1 == -1) cin >> min1;
            else if(min2 == -1) cin >> min2;
            else cin >> max;
        }
        
        if(max >= min1 + min2) cout << "1 2 " << n << "\n";
        else cout << "-1\n";
    }
    return 0;
}