#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        int arr[n];
        int ones = 0;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            if(arr[i] == 1) ++ones;
        }
        int lz = 0;
        int ez = n - 1;
        while(arr[lz] == 0) ++lz;
        while(arr[ez] == 0) --ez;
        int ans = ez - lz + 1 - ones;
        if(ans < 0) ans = 0;
        cout << ans << "\n";
    }
}