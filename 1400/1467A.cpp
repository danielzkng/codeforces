#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int k;
        cin >> k;
        
        if(k == 1) cout << "9\n";
        else cout << "98";
        
        k -= 2;
        int curr = 9;
        while(k > 0){
            cout << curr;
            curr++;
            if(curr > 9) curr = 0;
            k--;
        }
        cout << "\n";
    }
    
    return 0;
}