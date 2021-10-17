#include <iostream>
#include <set>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int x, y;
        cin >> x >> y;
        
        set<int> used;
        int out = 0;
        
        for(int i = 0; i < x + y; ++i){
            int k;
            cin >> k;
            
            if(used.count(k) == 0){
                used.insert(k);
            }
            else{
                out++;
            }
        }
        
        cout << out << "\n";
    }
    
    return 0;
}