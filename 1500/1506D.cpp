#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int zzz = 0; zzz < cases; zzz++){
        int n;
        cin >> n;
        
        map<int, int> counts;
        for(int i = 0; i < n; i++){
            int next;
            cin >> next;
            
            if(counts.find(next) == counts.end()){
                counts[next] = 1;
            }
            else{
                counts[next]++;
            }
        }
        
        int max = -1;
        map<int, int>::iterator k;
        for(k = counts.begin(); k != counts.end(); ++k){
            if(k->second > max){
                max = k->second;
            }
        }
        
        if(max <= n / 2) cout << n % 2 << endl;
        else{
            int others = n - max;
            cout << max - others << endl;
        }
    }
    
    return 0;
}