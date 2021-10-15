#include <iostream>

using namespace std;

int main(){
    int len, q;
    cin >> len >> q;
    int numbers[len];
    int ones = 0;
    for(int i = 0; i < len; i++){
        cin >> numbers[i];
        if(numbers[i] == 1) ones++;
    }
    
    for(int i = 0; i < q; i++){
        int type, idx;
        cin >> type >> idx;
        if(type == 1){
            idx--;
            if(numbers[idx] == 1){
                numbers[idx] = 0;
                ones--;
            }
            else{
                numbers[idx] = 1;
                ones++;
            }
        }
        else{
            if(ones >= idx) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    
    return 0;
}