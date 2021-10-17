#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        int x = 0;
        if(n % 2 == 0) cout << "2 1";
        else{
            cout << "3 1 2";
            x = 1;
        }
        for(int i = 1; i < n / 2; ++i){
            cout << " " << 2 * i + 2 + x << " " << 2 * i + 1 + x;
        }
        cout << "\n";
    }
    return 0;
}