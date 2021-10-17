#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n;
        cin >> n;
        
        bool valid = true;
        int current;
        cin >> current;
        for(int i = 1; i < n; ++i){
            int next;
            cin >> next;
            
            if(current == 1){
                if(!(next == 2 || next == n)) valid = false;
            }
            else if(current == n){
                if(!(next == n - 1 || next == 1)) valid = false;
            }
            else{
                if(!(current - next == -1 || current - next == 1)) valid = false;
            }
            
            current = next;
        }
        
        if(valid) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}