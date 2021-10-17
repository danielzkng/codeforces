#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; ++iter){
        int a;
        cin >> a;
        
        bool valid = false;
        
        for(int i = 0; i < a; ++i){
            int k;
            cin >> k;
            
            bool sq = false;
            
            for(int j = 1; j <= 100; ++j){
                if(k == j * j) sq = true;
            }
            
            valid = valid || (!sq);
        }
        
        if(valid) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}