#include <iostream>

using namespace std;

int main(){
    int k;
    cin >> k;
    for(int iter = 0; iter < k; ++iter) {
        int a, b;
        cin >> a >> b;
        for(int i = 0; i < a; ++i) {
            if(i % 3 == 0) cout << 'a';
            if(i % 3 == 1) cout << 'b';
            if(i % 3 == 2) cout << 'c';
        }
        cout << "\n";
    }
    return 0;
}