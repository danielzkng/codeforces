#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; iter++){
        int n;
        cin >> n;
        vector<int> x;
        vector<int> y;
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            x.push_back(k);
            y.push_back(k);
        }
        
        sort(x.begin(), x.end());
        
        for(int i = 0; i < n; i++){
            bool works = true;
            if(i != 0 && x[i] == x[i - 1]){
                works = false;
            }
            if(i != n - 1 && x[i] == x[i + 1]) works = false;
            if(works){
                for(int j = 0; j < n; j++){
                    if(y[j] == x[i]) cout << j + 1 << "\n";
                }
                break;
            }
            else{
                if(i == n - 1) cout << "-1" << endl;
            }
        }
    }
    
    return 0;
}