#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        for(int i = 0; i < n / 2; ++i){
            int x, y;
            cin >> x >> y;
            cout << (-1 * y) << " " << x << " ";
        }
        cout << "\n";
    }
    return 0;
}