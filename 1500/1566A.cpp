#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i){
        int n, s;
        cin >> n >> s;
        int x = n / 2 + 1;
        cout << s / x << "\n";
    }
    return 0;
}