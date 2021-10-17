#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
    int n;
    cin >> n;
    if(n == 1) cout << "-1\n";
    else {
        cout << "2";
        for(int i = 0; i < n - 1; ++i){
            cout << "3";
        }
        cout << "\n";
    }
    }
    return 0;
}