#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter) {
        string a, b;
        cin >> a >> b;
        
        if(a.length() != b.length()) continue;
        
        bool has[26];
        for(int i = 0; i < 26; ++i) {
            has[i] = false;
        }
        
        for(int i = 0; i < a.length(); ++i) {
            has[a[i] - 'a'] = true;
        }
        bool no = true;
        for(int j = 0; j < b.length(); ++j) {
            if(has[b[j] - 'a']) {
                cout << "YES\n";
                no = false;
                break;
            }
        }
        if(no) cout << "NO\n";
    }
    return 0;
}