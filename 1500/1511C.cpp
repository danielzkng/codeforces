#include <iostream>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    int top[51];
    for(int i = 0; i <= 50; ++i){
        top[i] = -1;
    }
    for(int i = 1; i <= n; ++i){
        int k;
        cin >> k;
        if(top[k] == -1) top[k] = i;
    }
    
    for(int i = 0; i < q; ++i){
        int k;
        cin >> k;
        int old = top[k];
        for(int i = 1; i < 51; ++i){
            if(top[i] < old && top[i] != -1) ++top[i];
        }
        top[k] = 1;
        cout << old << " ";
    }
    return 0;
}