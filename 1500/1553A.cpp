#include <iostream>

using namespace std;

int main(){
    int t; cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        cout << n / 10 + ((n % 10 == 9) ? 1 : 0) << "\n";
    }
    return 0;
}