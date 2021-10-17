#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int k;
        cin >> k;
        int a = 1;
        int b = 2;
        while(true) {
            a += b;
            b *= 2;
            if(k % a == 0){
                cout << k / a << "\n";
                break;
            }
        }
    }
    return 0;
}