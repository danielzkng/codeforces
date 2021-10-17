#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    string song;
    cin >> song;
    int dp[n + 1];
    dp[0] = 0;
    for(int i = 1; i <= n; ++i){
        dp[i] = dp[i - 1] + (song[i - 1] - 'a' + 1);
    }
    for(int i = 0; i < q; ++i){
        int l, r;
        cin >> l >> r;
        int ans = dp[r] - dp[l - 1];
        cout << ans << "\n";
    }
    return 0;
}