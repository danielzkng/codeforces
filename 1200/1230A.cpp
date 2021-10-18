#include <iostream>

using namespace std;

int main(){
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    int sum = a[0] + a[1] + a[2] + a[3];
    if(sum % 2 == 1) {
        cout << "NO\n";
        return 0;
    }
    for(int i = 0; i < 4; ++i){
        if(a[i] == sum/2) {
            cout << "YES\n";
            return 0;
        }
    }
    for(int i = 0; i < 4; ++i){
        for(int j = i + 1; j < 4; ++j){
            if(a[i] + a[j] == sum/2){
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}