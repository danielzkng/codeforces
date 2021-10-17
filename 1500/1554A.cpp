#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        long long prev;
        cin >> prev;
        long long max = -1;
        long long curr;
        for(int i = 1; i < n; ++i){
            cin >> curr;
            if(curr * prev > max) max = curr * prev;
            prev = curr;
        }
        cout << max << "\n";
    }
    return 0;
}