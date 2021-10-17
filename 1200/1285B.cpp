#include <iostream>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n;
        cin >> n;
        long long c[n];
        long long sum = 0;
        for(int i = 0; i < n; ++i){
            cin >> c[i];
            sum += c[i];
        }
        long long partial = 0;
        bool valid = false;
        for(int i = 0; i < n - 1; ++i){
            partial += c[i];
            if(partial <= 0 || partial >= sum) {
                cout << "NO\n";
                valid = true;
                break;
            }
        }
        if(!valid){
            cout << "YES\n";
        }
    }
    return 0;
}