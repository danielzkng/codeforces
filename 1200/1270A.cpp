#include <iostream>

using namespace std;

int main(){
    int k;
    cin >> k;
    for(int iter = 0; iter < k; ++iter){
        int a, b, c;
        cin >> a >> b >> c;
        string out = "NO";
        for(int i = 0; i < b; ++i){
            int n;
            cin >> n;
            if(n == a){
                out = "YES";
            }
        }
        for(int i = 0; i < c; ++i){
            int n;
            cin >> n;
        }
        cout << out << "\n";
    }
    return 0;
}