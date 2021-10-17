#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int min_pen = a / c;
        if(a % c != 0) ++min_pen;
        int min_pencil = b / d;
        if(b % d != 0) ++min_pencil;
        if(min_pen + min_pencil > k) cout << "-1\n";
        else cout << min_pen << " " << min_pencil << "\n";
    }
    return 0;
}