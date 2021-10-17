#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    int max1 = 0;
    for(int i = 0; i < x; ++i){
        int k;
        cin >> k;
        if(k > max1) max1 = k;
    }
    int max2 = 0;
    cin >> x;
    for(int j = 0; j < x; ++j){
        int k;
        cin >> k;
        if(k > max2) max2 = k;
    }
    
    cout << max1 << " " << max2 << "\n";
    return 0;
}