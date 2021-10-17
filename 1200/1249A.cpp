#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n;
        cin >> n;
        bool skills[100];
        
        for(int i = 0; i < 100; i++){
            skills[i] = false;
        }
        
        for(int i = 0; i < n; ++i){
            int k;
            cin >> k;
            skills[k - 1] = true;
        }
        
        bool consec = false;
        for(int i = 0; i < 99; ++i){
            consec = consec || (skills[i] && skills[i + 1]);
        }
        
        if(consec) cout << 2 << "\n";
        else cout << 1 << "\n";
    }
    
    return 0;
}