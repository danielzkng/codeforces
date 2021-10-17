#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        int low = 0;
        int hi = n - 1;
        while(low <= hi){
            cout << arr[low] << " ";
            low++;
            if(low > hi) break;
            cout << arr[hi] << " ";
            hi--;
        }
        cout << endl;
    }
    
    return 0;
}