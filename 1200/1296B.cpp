#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int k;
        cin >> k;
        int total = 0;
        while(k >= 10) {
            int spent = k - k % 10;
            total += spent;
            k -= spent;
            k += spent / 10;
        }
        total += k;
        cout << total << "\n";
    }
    return 0;
}