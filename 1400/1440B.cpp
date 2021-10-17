#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n, k;
        cin >> n >> k;
        int arr[n * k];
        for(int i = 0; i < n * k; ++i){
            cin >> arr[i];
        }
        int d = n / 2 + 1;
        long long sum = 0;
        int c = n * k;
        for(int i = 0; i < k; ++i){
            c -= d;
            sum += arr[c];
        }
        cout << sum << "\n";
    }
    return 0;
}