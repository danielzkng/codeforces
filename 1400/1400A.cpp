#include <iostream>
#include <string>

using namespace std;

int main(){
    int kases;
    cin >> kases;
    for(int iter = 0; iter < kases; ++iter){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        string x = "";
        for(int i = 0; i < n; i++){
            x += s[2 * i];
        }
        
        cout << x << "\n";
    }
    return 0;
}