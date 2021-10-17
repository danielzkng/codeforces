#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter) {
        int k;
        cin >> k;
        bool sorted = true;
        vector<int> vi;
        for(int i = 1; i <= k; ++i) {
            int x;
            cin >> x;
            vi.push_back(x);
            sorted = sorted && (x == i);
        }
        if(sorted) {
            cout << 0 << "\n";
            continue;
        }
        if(vi[0] == k && vi[k - 1] == 1) {
            cout << 3 << "\n";
            continue;
        }
        if(vi[0] == 1 || vi[k - 1] == k) cout << 1 << "\n";
        else cout << 2 << "\n";
    }
    return 0;
}