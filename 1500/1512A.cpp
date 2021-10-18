#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int zzz = 0; zzz < cases; zzz++){
        int len;
        cin >> len;
        int min = 0;
        int maj = 0;
        
        int min_count = 0;
        int maj_count = 0;
        
        int arr[len];
        for(int i = 0; i < len; i++){
            cin >> arr[i];
            if (min == 0){
                min = arr[i];
            }
            if (min != 0 && maj == 0 && arr[i] != min){
                maj = arr[i];
            }
            
            if(arr[i] == min) min_count++;
            else maj_count++;
        }
        
        int spy;
        if(min_count == 1) spy = min;
        else spy = maj;
        
        for(int i = 0; i < len; i++){
            if(arr[i] == spy) cout << i + 1 << endl;
        }
        
    }
    return 0;
}