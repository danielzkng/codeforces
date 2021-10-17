#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        bool done = false;
        for(int i = 1; i < n; ++i){
            if(s[i - 1] != s[i]) {
                cout << i << " " << i + 1 << "\n";
                done = true;
                break;
            }
        }
        if(!done) cout << "-1 -1\n";
    }
}