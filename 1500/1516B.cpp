#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        int arr[n];
        int cum = 0;
        int finalzero = -1;
        for(int i = 0; i < n; ++i){
            int k;
            cin >> k;
            cum = cum ^ k;
            arr[i] = cum;
            if(cum == 0) finalzero = i;
        }
        if(finalzero == -1){
            cout << "NO\n";
        }
        else{
            if(arr[n - 1] == 0) cout << "YES\n";
            else{
                bool win = false;
                for(int i = 0; i < finalzero; ++i){
                    if(arr[i] == arr[n - 1]) win = true;
                }
                if(win) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
    return 0;
}