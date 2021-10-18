#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i = (a); i < (b); ++i)

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int nums[n];
    int xmax = -2e9;
    int xmin = 2e9;
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
        if(nums[i] < xmin) xmin = nums[i];
        if(nums[i] > xmax) xmax = nums[i];
    }
    if(k == 1) {
        cout << xmin << "\n";
    }
    else if(k == 2) {
        cout << max(nums[0], nums[n - 1]) << "\n";
    }
    else {
        cout << xmax << "\n";
    }
    return 0;
}