#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int k;
        cin >> k;
        int first = -1;
        bool all_same = true;
        for(int i =0; i < k; ++i){
            int z;
            cin >> z;
            if(first == -1) {
                first = z;
            }
            if (first != z) {
                all_same = false;
            }
        }
        if(all_same) {
            cout << k << "\n";
        }
        else cout << "1\n";
    }
    return 0;
}