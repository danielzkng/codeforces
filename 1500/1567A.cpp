#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int x;
        cin >> x;
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == 'U') cout << "D";
            else if(s[i] == 'D') cout << "U";
            else cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}