#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        int n;
        cin >> n;
        int max_n = 0;
        int current_n = 0;
        for(int i = 0; i < n; i++){
            int input;
            cin >> input;
            
            current_n += input;
            if(current_n > max_n) max_n = current_n;
        }
        
        int m;
        cin >> m;
        int max_m = 0;
        int current_m = 0;
        for(int i = 0; i < m; i++){
            int input;
            cin >> input;
            
            current_m += input;
            if(current_m > max_m) max_m = current_m;
        }
        
        cout << max_n + max_m << endl;
    }
    
    return 0;
}