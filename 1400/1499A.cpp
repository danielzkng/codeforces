#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int zzz = 0; zzz < cases; zzz++){
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        int w, b;
        cin >> w >> b;
        
        int max_white = 0;
        if(k1 > k2){
            max_white += k2 + ((k1 - k2) / 2);
        }
        else{
            max_white += k1 + ((k2 - k1) / 2);
        }
        
        int max_black = 0;
        if(k1 > k2){
            max_black = (n - k1) + ((k1 - k2) / 2);
        }
        else{
            max_black = (n - k2) + ((k2 - k1) / 2);
        }
        
        if(max_white >= w && max_black >= b){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}