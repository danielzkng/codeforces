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
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }
        set<int> s;
        for(int i = 0; i < n; ++i){
            for(int j = i + 1; j < n; ++j){
                s.insert(arr[j] - arr[i]);
            }
        }
        cout << s.size() << "\n";
    }
    return 0;
}