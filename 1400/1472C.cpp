#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        int len;
        cin >> len;
        int arr[len];
        int val[len];
        
        for(int i = 0; i < len; i++){
            cin >> arr[i];
            val[i] = 0;
        }
        
        for(int i = len - 1; i >= 0; i--){
            if(i + arr[i] >= len) val[i] = arr[i];
            else val[i] = arr[i] + val[i + arr[i]];
        }
        
        int max = -1;
        for(int i = 0; i < len; i++){
            if(val[i] > max) max = val[i];
        }
        
        cout << max << endl;
    }
    
    return 0;
}