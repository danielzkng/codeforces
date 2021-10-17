#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        string a, b, c;
        cin >> a >> b >> c;
        bool valid = true;
        for(int i = 0; i < a.length(); ++i){
            if(c[i] != a[i] && c[i] != b[i]){
                valid = false;
            }
        }
        if(valid) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}