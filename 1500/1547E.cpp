#include <iostream>
 
using namespace std;
 
int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n, k;
        cin >> n >> k;
        int ltemp[n + 1];
        int rtemp[n + 1];
        int ac[k];
        int at[n + 1];
        for(int i = 0; i < k; ++i){
            cin >> ac[i];
        }
        for(int i = 0; i <= n; ++i){
            at[i] = -1;
        }
        for(int i = 0; i < k; ++i){
            cin >> at[ac[i]];
        }
        
        int lt = 2000000000;
        for(int i = 1; i <= n; ++i){
            if(at[i] != -1 && at[i] < lt) {
                lt = at[i];
            }
            ltemp[i] = lt;
            ++lt;
        }
        
        int rt = 2000000000;
        for(int i = n; i > 0; --i){
            if(at[i] != -1 && at[i] < rt) {
                rt = at[i];
            }
            rtemp[i] = rt;
            ++rt;
        }
        for(int i = 1; i <= n; ++i){
            cout << min(ltemp[i], rtemp[i]) << " ";
        }
        cout << "\n";
    }
    return 0;
}