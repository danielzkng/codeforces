#include <iostream>

using namespace std;

int main(){
    int n;
    int ans[1000];
    int x = 1;
    for(int i = 0; i < 1000; ++i){
        while(x % 3 == 0 || x % 10 == 3) ++x;
        ans[i] = x;
        ++x;
    }
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int k;
        cin >> k;
        cout << ans[k - 1] << "\n";
    }
    return 0;
}