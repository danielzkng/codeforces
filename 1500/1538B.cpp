#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int k;
    cin >> k;
    for(int iter = 0; iter < k; ++iter){
        int n;
        cin >> n;
        
        int *arr = (int*)calloc(n, sizeof(int));
        int total = 0;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            total += arr[i];
        }
        if(total % n != 0){
            cout << "-1\n";
        }
        else{
            int out = 0;
            int avg = total / n;
            for(int i = 0; i < n; ++i){
                if(arr[i] > avg) ++out;
            }
            cout << out << "\n";
        }
        free(arr);
    }
    return 0;
}