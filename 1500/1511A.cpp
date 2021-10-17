#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n;
        cin >> n;
        
        int up = 0, down = 0;
        
        for(int i = 0; i < n; ++i){
            int x;
            cin >> x;
            if(x == 2) down++;
            else up++;
        }
        
        cout << up << "\n";
    }
    
    return 0;
}