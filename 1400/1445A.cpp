#include <iostream>
#include <string>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int len;
        cin >> len;
        
        int x;
        cin >> x;
        
        int a[len];
        int b[len];
        
        for(int i = 0; i < len; ++i){
            cin >> a[i];
        }
        for(int i = 0; i < len; ++i){
            cin >> b[i];
        }
        
        bool valid = true;
        
        for(int i = 0; i < len; ++i){
            if(a[i] + b[len - i - 1] > x) valid = false;
        }
        
        if(valid) cout << "Yes\n";
        else cout << "No\n";
    }
    
    return 0;
}