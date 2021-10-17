#include <iostream>

using namespace std;

int main(){
    int k;
    cin >> k;
    for(int iter = 0; iter < k; ++iter){
        long long n;
        cin >> n;
        int moves = 0;
        while(n % 2 == 0){
            n /= 2;
            ++moves;
        }
        while(n % 3 == 0){
            n /= 3;
            moves += 2;
        }
        while(n % 5 == 0){
            n /= 5;
            moves += 3;
        }
        
        if(n == 1) cout << moves << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}