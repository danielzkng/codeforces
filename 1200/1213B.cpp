#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }
        int min = arr[n - 1];
        int count = 0;
        for(int i = n - 2; i >= 0; --i){
            if(arr[i] > min) ++count;
            if(arr[i] < min) min = arr[i];
        }
        cout << count << "\n";
    }
    return 0;
}