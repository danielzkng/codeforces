#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n, d;
        cin >> n >> d;
        vector<int> arr;
        for(int i = 0; i < n; ++i){
            int k;
            cin >> k;
            arr.push_back(k);
        }
        sort(arr.begin(), arr.end());
        if(arr[0] + arr[1] <= d || arr[n - 1] <= d) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}