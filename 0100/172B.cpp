#include <iostream>

using namespace std;

int main(){
    int a, b, m, r;
    cin >> a >> b >> m >> r;
    int used[m];
    for(int i = 0; i < m; ++i) {
        used[i] = -1;
        if(i == r) used[i] = 0;
    }
    int count = 0;
    while(true) {
        ++count;
        r = (a * r + b) % m;
        if(used[r] != -1) {
            cout << count - used[r] << "\n";
            return 0;
        }
        used[r] = count;
    }
    return 0;
}