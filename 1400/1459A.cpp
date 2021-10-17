#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int x;
        cin >> x;
        int red[x];
        int blue[x];
        char c;
        for(int i = 0; i < x; ++i){
            cin >> c;
            red[i] = c - '0';
            // cout << red[i] << endl;
        }
        // cout << "XXX\n";
        //cin >> c;
        for(int i = 0; i < x; ++i){
            cin >> c;
            blue[i] = c - '0';
            // cout << blue[i] << endl;
        }
        //cin >> c;
        int zzz = 0;
        for(int i = 0; i < x; ++i){
            if(red[i] > blue[i]) ++zzz;
            if(blue[i] > red[i]) --zzz;
        }
        if(zzz == 0) cout << "EQUAL\n";
        else cout << (zzz > 0 ? "RED" : "BLUE") << "\n";
    }
    return 0;
}