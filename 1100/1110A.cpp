#include <iostream>

using namespace std;

int main(){
    int b, k;
    cin >> b >> k;
    if(b % 2 == 0) {
        int x;
        for(int i = 0; i < k; ++i) cin >> x;
        cout << (x % 2 == 0 ? "even" : "odd");
    } else {
        int sum;
        for(int i = 0; i < k ;++i){
            int x;
            cin >> x;
            sum += x;
            sum %= 2;
        }
        cout << (sum % 2 == 0 ? "even" : "odd");
    }
    return 0;
}