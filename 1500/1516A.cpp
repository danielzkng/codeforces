#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int iter = 0; iter < n; ++iter){
        int len, ops;
        cin >> len >> ops;
        int arr[len];
        for(int i = 0; i < len; ++i){
            cin >> arr[i];
        }
        
        int curr = 0;
        while(ops > 0 && curr != len - 1){
            if(arr[curr] != 0){
               if(ops < arr[curr]){
                   arr[curr] -= ops;
                   arr[len - 1] += ops;
                   ops = 0;
               }
               else{
                   ops -= arr[curr];
                   arr[len - 1] += arr[curr];
                   arr[curr] = 0;
               }
            }
            curr++;
        }
        
        for(int i = 0; i < len; ++i){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}