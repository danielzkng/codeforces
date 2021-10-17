#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        int x = 0;
        if(n % 2 == 1) {
            n -= 3;
            ++x;
        }
        x += n / 2;
        cout << x << "\n";
    }
    return 0;
}