#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int len;
        cin >> len;
        string s;
        cin >> s;
        string hi = "";
        string lo = "";
        bool flag = false;
        for(int i = 0; i < len; ++i){
            if(s[i] == '1' && !flag) {
                hi += '1';
                lo += '0';
                flag = true;
            }
            else if(s[i] == '1' && flag) {
                lo += '1';
                hi += '0';
            }
            else if(s[i] == '2' && flag) {
                lo += '2';
                hi += '0';
            }
            else if(s[i] == '2' && !flag) {
                hi += '1';
                lo += '1';
            }
            else {
                hi += '0';
                lo += '0';
            }
        }
        cout << hi << "\n" << lo << "\n";
    }
    return 0;
}