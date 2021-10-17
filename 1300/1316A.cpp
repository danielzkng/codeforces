#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; iter++){
        int n, m;
        cin >> n >> m;
        
        long long sum = 0;
        for(int i = 0; i < n; i++){
            int toAdd;
            cin >> toAdd;
            sum += toAdd;
        }
        
        if(sum > m) cout << m << endl;
        else cout << sum << endl;
    }
    
    return 0;
}