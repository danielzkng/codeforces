#include <iostream>

using namespace std;

int main(){
    int cases = 0;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        int n;
        cin >> n;
        bool diverse[2 * n + 2];
        for(int i = 0; i < 2 * n + 2; i++){
            diverse[i] = false;
        }
        
        int total = 0;
        
        for(int i = 0; i < n; i++){
            int in;
            cin >> in;
            
            if(diverse[in]){
                if(!diverse[in + 1]){
                    diverse[in + 1] = true;
                    total++;
                }
            }
            else{
                diverse[in] = true;
                total++;
            }
        }
        
        cout << total << endl;
    }
    
    return 0;
}