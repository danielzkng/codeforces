#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        for(int i = 1; i <= n; ++i){
            for(int j = 0; j < i; ++j){
                cout << "(";
            }
            for(int j = 0; j < i; ++j){
                cout << ")";
            }
            for(int j = 0; j < n - i; ++j){
                cout << "()";
            }
            cout << "\n";
        }
    }
    return 0;
}