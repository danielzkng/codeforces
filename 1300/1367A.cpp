#include <iostream>
#include <string>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        string k;
        cin >> k;
        int len = k.length();
        for(int i = 0; i < len; i += 2){
            cout << k[i];
        }
        cout << k[len - 1] << "\n";
    }
    return 0;
}