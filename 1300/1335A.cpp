#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        cout << n / 2 + (n % 2 == 0 ? -1 : 0) << "\n";
    }
    return 0;
}