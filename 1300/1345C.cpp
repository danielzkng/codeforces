#include <iostream>
#include <set>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        int arr[n];
        bool used[n];
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            used[i] = false;
        }

        for(int i = 0; i < n; ++i){
            int x = (i + arr[i]) % n;
            if(x < 0) x += n;
            used[x] = true;
        }
        bool valid = true;
        for(int i = 0; i < n; ++i){
            valid = valid && used[i];
        }
        if(valid) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}