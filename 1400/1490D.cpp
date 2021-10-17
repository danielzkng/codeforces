#include <iostream>

using namespace std;

void solve(int perm[], int layers[], int lo, int hi){
    if(lo == hi) return;
    
    int max = -1;
    int max_loc = -1;
    for(int i = lo; i < hi; i++){
        if(perm[i] > max){
            max = perm[i];
            max_loc = i;
        }
    }
    
    for(int i = lo; i < hi; i++){
        if(i != max_loc) layers[i]++;
    }
    
    solve(perm, layers, lo, max_loc);
    solve(perm, layers, max_loc + 1, hi);
}

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        int len;
        cin >> len;
        int perm[len];
        int layers[len];
        for(int i = 0; i < len; i++){
            cin >> perm[i];
            layers[i] = 0;
        }
        
        solve(perm, layers, 0, len);
        
        cout << layers[0];
        for(int i = 1; i < len; i++){
            cout << " " << layers[i];
        }
        cout << endl;
    }
    
    return 0;
}