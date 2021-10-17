#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int k;
        cin >> k;
        int arr[k];
        int min = 100000;
        for(int i = 0; i < k; ++i){
            cin >> arr[i];
            if(arr[i] < min) min = arr[i];
        }
        int out = 0;
        for(int i = 0; i < k; ++i){
            if(arr[i] > min) ++out;
        }
        cout << out << "\n";
    }
    return 0;
}