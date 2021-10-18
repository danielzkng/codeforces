#include <iostream>
#define ll long long

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int zzz = 0; zzz < cases; zzz++){
        int n;
        cin >> n;
        ll totals[n];
        for(int i = 0; i <= n; i++){
            totals[i] = 0;
        }
        
        ll min_up, min_right;
        
        cin >> min_up >> min_right;
        totals[2] = min_up * n + min_right * n;
        ll replace = n - 1;
        for(int i = 3; i <= n; i++){
            ll next;
            cin >> next;
            if(i % 2 == 0){
                //going right
                if(next < min_right){
                    totals[i] = totals[i - 1] - replace * (min_right - next);
                    min_right = next;
                }
                else{
                    totals[i] = totals[i - 1] - min_right + next;
                }
                
                replace--;
            }
            else{
                //going up
                if(next < min_up){
                    totals[i] = totals[i - 1] - replace * (min_up - next);
                    min_up = next;
                }
                else{
                    totals[i] = totals[i - 1] - min_up + next;
                }
            }
        }
        
        ll min = totals[2];
        for(int i = 2; i <= n; i++){
            if(min > totals[i]) min = totals[i];
        }
        cout << min << endl;
    }
    
    return 0;
}