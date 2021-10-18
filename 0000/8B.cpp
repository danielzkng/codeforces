#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    set<int> locs;
    int x = 0;
    int y = 0;
    locs.insert(0);
    for(int i = 0; i < s.length(); ++i){
        // locs.insert(1000 * y + x);
        switch(s[i]) {
            case 'U':
                locs.insert(1000 * (y - 1) + x);
                locs.insert(1000 * y + x + 1);
                locs.insert(1000 * y + x - 1);
                ++y;
                break;
            case 'D':
                locs.insert(1000 * (y + 1) + x);
                locs.insert(1000 * y + x + 1);
                locs.insert(1000 * y + x - 1);
                --y;
                break;
            case 'L':
                locs.insert(1000 * (y - 1) + x);
                locs.insert(1000 * (y + 1) + x);
                locs.insert(1000 * y + x + 1);
                --x;
                break;
            case 'R':
                locs.insert(1000 * (y - 1) + x);
                locs.insert(1000 * (y + 1) + x);
                locs.insert(1000 * y + x - 1);
                ++x;
                break;
        }
        int hash = 1000 * y + x;
        if(locs.count(hash) != 0) {
            cout << "BUG\n";
            return 0;
        }
        else locs.insert(hash);
    }
    cout << "OK\n";
    return 0;
}