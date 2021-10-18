#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ones = 0;
    int zeroes = 0;
    for(int i = 0; i < n; ++i) {
        if(s[i] == '1') ++ones;
        else ++zeroes;
    }
    
    if(ones == zeroes) {
        cout << 2 << "\n";
        cout << s[0] << " ";
        for(int i = 1; i < n; ++i) {
            cout << s[i];
        }
        cout << "\n";
        return 0;
    }
    cout << "1\n" << s << "\n";
    return 0;
}