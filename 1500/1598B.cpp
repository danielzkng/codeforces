#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter) {
        int k;
        cin >> k;
        int avail[k][5];
        for(int i = 0; i < k; ++i) {
            for(int j = 0; j < 5; ++j)
            cin >> avail[i][j];
        }
        if(k % 2 == 1) {
            cout << "NO\n";
            continue;
        }
        
        bool works = false;
        for(int i = 0; i < 5; ++i) {
            for(int j = i + 1; j < 5; ++j) {
                int both = 0;
                int left = 0;
                int right = 0;
                int neither = 0;
                for(int l = 0; l < k; ++l) {
                    if(avail[l][i] == 1 && avail[l][j] == 1) ++both;
                    else if(avail[l][i] == 1) ++left;
                    else if(avail[l][j] == 1) ++ right;
                    else ++neither;
                }
                
                if(left <= k / 2 && right <= k / 2 && neither == 0) works = true;
            }
        }
        
        if(works) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}