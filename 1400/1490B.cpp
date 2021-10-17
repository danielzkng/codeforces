#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        int len;
        cin >> len;
        int mods[3];
        mods[0] = 0;
        mods[1] = 0;
        mods[2] = 0;
        
        for(int i = 0; i < len; i++){
            int in;
            cin >> in;
            mods[in % 3]++;
        }
        
        int ans = 0;
        len /= 3;
        
        if(mods[0] > len){
            int k = mods[0] - len;
            mods[0] -= k;
            mods[1] += k;
            ans += k;
        }
        
        if(mods[1] > len){
            int k = mods[1] - len;
            mods[1] -= k;
            mods[2] += k;
            ans += k;
        }
        
        if(mods[2] > len){
            int k = mods[2] - len;
            mods[2] -= k;
            mods[0] += k;
            ans += k;
        }
        
        if(mods[0] > len){
            int k = mods[0] - len;
            mods[0] -= k;
            mods[1] += k;
            ans += k;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}