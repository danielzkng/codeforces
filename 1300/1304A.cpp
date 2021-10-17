#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        
        int dist = y - x;
        int closing = a + b;
        if(dist % closing == 0) cout << dist / closing << "\n";
        else cout << -1 << "\n";
    }

    return 0;
}