#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> k;
    bool all_odd = true;
    bool all_even = true;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        k.push_back(x);
        if(x % 2 == 0) all_odd = false;
        else all_even = false;
    }
    if(!all_even && !all_odd) sort(k.begin(), k.end());
    for(int i = 0; i < n; ++i) {
        cout << k[i] << " ";
    }
    cout << "\n";
    return 0;
}