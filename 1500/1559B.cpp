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
        char c[n];
        if(n == 1){
            if(s[0] == '?') cout << "B\n";
            else cout << s << "\n";
        } else {
            char fill = '?';
            for(int i = 0; i < n; ++i){
                if(s[i] == '?') {
                    c[i] = fill;
                    if(fill == 'B') fill = 'R';
                    else if(fill == 'R') fill = 'B';
                } else if(s[i] == 'B') {
                    c[i] = 'B';
                    fill = 'R';
                } else if(s[i] == 'R') {
                    c[i] = 'R';
                    fill = 'B';
                }
            }
            fill = (fill == '?' ? 'B' : '?');
            for(int i = n - 1; i >= 0; --i){
                if(c[i] == '?') {
                    c[i] = fill;
                    if(fill == 'B') fill = 'R';
                    else if(fill == 'R') fill = 'B';
                } else if(c[i] == 'B') {
                    c[i] = 'B';
                    fill = 'R';
                } else if(c[i] == 'R') {
                    c[i] = 'R';
                    fill = 'B';
                }
            }
            for(int i = 0; i < n; ++i){
                cout << c[i];
            }
            cout << "\n";
        }
    }
    return 0;
}