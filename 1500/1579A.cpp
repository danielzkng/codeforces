#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        int x[3];
        x[0] = 0;
        x[1] = 0;
        x[2] = 0;
        for(int i = 0; i < s.length(); ++i){
            x[s[i] - 'A']++;
        }
        if(x[0] + x[2] == x[1]) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}