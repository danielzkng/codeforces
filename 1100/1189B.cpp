#include <bits/stdc++.h>

using namespace std;

bool gt(int a, int b) {
    return a > b;
}

int main(){
    int n;
    cin >> n;
    vector<int> k;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        k.push_back(x);
    }
    sort(k.begin(), k.end(), gt);
    if(k[0] >= k[1] + k[2]) cout << "NO\n";
    else {
        cout << "YES\n";
        for(int i = 0; i < n; ++i) {
            if(i != 2) cout << k[i] << " ";
        }
        cout << k[2] << "\n";
    }
    return 0;
}