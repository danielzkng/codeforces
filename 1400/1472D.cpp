#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        int n;
        cin >> n;
        
        vector<int> a;
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            a.push_back(k);
        }
        
        sort(a.begin(), a.end());
        
        long long alice = 0;
        long long bob = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                if(a[n - i - 1] % 2 == 0) alice += a[n - i - 1];
            }
            else{
                if(a[n - i - 1] % 2 == 1) bob += a[n - i - 1];
            }
        }
        
        if(alice > bob) cout << "Alice" << endl;
        else if(bob > alice) cout << "Bob" << endl;
        else cout << "Tie" << endl;
    }
    
    return 0;
}