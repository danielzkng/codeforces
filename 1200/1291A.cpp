#include <iostream>
#include <string>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string out = "";
        int count = 0;
        for(int i = 0; i < n; ++i){
            switch (s[i]){
                case '1':
                case '3':
                case '5':
                case '7':
                case '9':
                    out += s[i];
                    ++count;
                    break;
                default:
                    break;
            }
            if(count >= 2) break;
        }
        
        if(count >= 2){
            cout << out << "\n";
        }
        else cout << "-1\n";
    }
    return 0;
}