#include <iostream>
#include <queue>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i) cin >> b[i];
        queue<int> up;
        queue<int> down;
        int count = 0;
        int total = 0;
        for(int i = 0; i < n; ++i){
            int diff;
            if(a[i] > b[i]) {
                diff = a[i] - b[i];
                total -= diff;
                for(int j = 0; j < diff; ++j){
                    down.push(i);
                }
            }
            else {
                diff = b[i] - a[i];
                total += diff;
                count += diff;
                for(int j = 0; j < diff; ++j){
                    up.push(i);
                }
            }
        }
        if(total != 0) cout << -1 << "\n";
        else {
            cout << count << "\n";
            for(int i = 0; i < count; ++i){
                cout << down.front() + 1 << " " << up.front() + 1 << "\n";
                down.pop();
                up.pop();
            }
        }
    }
    return 0;
}