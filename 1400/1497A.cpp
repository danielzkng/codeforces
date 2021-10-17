#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        int len;
        cin >> len;
        int counts[101];
        
        for(int i = 0; i < 101; i++){
            counts[i] = 0;
        }
        
        for(int i = 0; i < len; i++){
            int in;
            cin >> in;
            counts[in]++;
        }
        
        int curr = 0;
        while(counts[curr] != 0){
            cout << curr << " ";
            counts[curr]--;
            curr++;
        }
        
        for(int i = 0; i < 101; i++){
            while(counts[i] != 0){
                cout << i << " ";
                counts[i]--;
            }
        }
        
        cout << endl;
    }
    
    return 0;
    
}