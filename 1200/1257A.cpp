#include <iostream>
using namespace std;
int posDiff(int first, int last){
    if(first - last >= 0) return first - last;
    else return last - first;
}
int main(){
    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++){
        int n, x, a, b;
        cin >> n >> x >> a >> b;
        int currentDiff = posDiff(a, b);
        if(currentDiff + x > n - 1) cout << n-1 << endl;
        else cout << x + currentDiff << endl;
    }
    return 0;
}