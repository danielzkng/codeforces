#include <iostream>
#include <string>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;
        int len = s.length();
        int up = 0;
        int down = 0;
        int left = 0;
        int right = 0;
        for(int i = 0; i < len; ++i){
            switch(s[i]){
                case 'U':
                    ++up;
                    break;
                case 'D':
                    ++down;
                    break;
                case 'R':
                    ++right;
                    break;
                case 'L':
                    ++left;
                    break;
                default:
                    cout << "NO\n";
            }
        }
        
        bool valid = true;
        if(y > 0 && up < y) valid = false;
        if(y < 0 && down < -1 * y) valid = false;
        if(x > 0 && right < x) valid = false;
        if(x < 0 && left < -1 * x) valid = false;
        if(valid) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}