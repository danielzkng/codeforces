#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n;
        cin >> n;
        
        int a[n];
        int b[n];
        int c[n];
        
        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i) cin >> b[i];
        for(int i = 0; i < n; ++i) cin >> c[i];
        
        int out[n];
        out[0] = a[0];
        for(int i = 1; i < n - 1; ++i){
            if(out[i - 1] == a[i]) out[i] = b[i];
            else out[i] = a[i];
        }
        
        if(out[n - 2] != a[n - 1] && out[0] != a[n - 1]){
            out[n - 1] = a[n - 1];
        }
        else if (out[n - 2] != b[n - 1] && out[0] != b[n - 1]){
            out[n - 1] = b[n - 1];
        }
        else{
            out[n - 1] = c[n - 1];
        }
        
        for(int i = 0; i < n; ++i){
            cout << out[i] << " ";
        }
        cout << "\n";
    }
}