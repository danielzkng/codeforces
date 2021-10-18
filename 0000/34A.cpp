#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    
    int mindex = -1;
    int min = 9999999;
    for(int i = 0; i < n - 1; ++i){
        int x = abs(arr[i] -  arr[i + 1]);
        if(x < min) {
            min = x;
            mindex = i;
        }
    }
    
    if(abs(arr[n - 1] - arr[0]) < min) {
        cout << 1 << " " << n << "\n";
    }
    else cout << mindex + 2 << " " << mindex + 1 << "\n";
    
    return 0;
}