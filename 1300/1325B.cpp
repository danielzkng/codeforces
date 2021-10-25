#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter) {
        int k;
        cin >> k;
        vector<int> v;
        for(int i = 0; i < k; ++i) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int count = 0;
        for(int i = 0; i < k; ++i) {
            if(i == 0 || v[i] != v[i - 1]) ++count;
        }
        cout << count << "\n";
    }
    return 0;
}