#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n;
        cin >> n;
        
        bool ascend = false;
        int last = 1000000001;
        
        for(int i = 0; i < n; ++i){
            int next;
            cin >> next;
            if(next >= last) ascend = true;
            last = next;
        }
        
        if(ascend) cout << "YES\n";
        else cout << "NO\n";
        
    }
    
    return 0;
}