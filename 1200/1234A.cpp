#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n;
        cin >> n;
        
        int sum = 0;
        for(int i = 0; i < n; ++i){
            int k;
            cin >> k;
            sum += k;
        }
        
        int x = sum / n;
        if(sum % n != 0) ++x;
        
        cout << x << "\n";
    }
    
    return 0;
}