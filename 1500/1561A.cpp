#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int k;
        cin >> k;
        int arr[k];
        for(int i = 0; i < k; ++i){
            cin >> arr[i];
        }
        int count = 0;
        while(true){
            bool sorted = true;
            for(int i = 0; i < k - 1; ++i){
                if(arr[i] > arr[i + 1]) sorted = false;
            }
            if(sorted) {
                cout << count << "\n";
                break;
            }
            
            for(int i = count % 2; i <= k - 2; i += 2) {
                if(arr[i] > arr[i + 1]) {
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
            ++count;
        }
    }
    return 0;
}