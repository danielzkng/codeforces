#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int x;
        cin >> x;
        vector<int> v;
        for(int i = 0; i < 2 * x; ++i){
            int k;
            cin >> k;
            v.push_back(k);
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < x; ++i){
            cout << v[i] << " " << v[x + i] << " ";
        }
        cout << "\n";
    }
    return 0;
}