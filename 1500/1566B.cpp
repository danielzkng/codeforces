#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;

        int count = 2;
        for(int j = 0; j < s.length(); ++j){
            if(s[j] == '0') {
                if(count != 1) --count;
            }
            else {
                // it's a 1
                if(count == 1) --count;
            }
        }
        if(count == 2) cout << "0\n";
        else if(count == 1 || count == 0) cout << "1\n";
        else cout << "2\n";
    }
    return 0;
}