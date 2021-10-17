#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        string s;
        cin >> s;
        switch(s[s.length() - 1]) {
            case 'o':
                cout << "FILIPINO\n";
                break;
            case 'a':
                cout << "KOREAN\n";
                break;
            default:
                cout << "JAPANESE\n";
        }
    }
    return 0;
}