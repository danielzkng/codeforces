#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter) {
        int n;
        cin >> n;
        vector<int> nk;
        for(int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nk.push_back(x);
        }
        vector<int> b;
        for(int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            b.push_back(x);
        }
        
        sort(nk.begin(), nk.end());
        sort(b.begin(), b.end());
        
        for(int i = 0; i < n; ++i) {
            cout << nk[i] << " ";
        }
        cout << "\n";
        for(int i = 0; i < n; ++i) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}