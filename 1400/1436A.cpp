#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        long long n, k;
        cin >> n >> k;
        long long total = 0;
        for(long long i = 0; i < n; ++i){
            long long in;
            cin >> in;
            total += in;
        }
        
        if(total == k) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}