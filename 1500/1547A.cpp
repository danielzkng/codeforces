#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int xa, xb, ya, yb, xf, yf;
        cin >> xa >> ya;
        cin >> xb >> yb;
        cin >> xf >> yf;
        int xdist, ydist;
        xdist = xb - xa;
        if(xdist < 0) xdist *= -1;
        ydist = yb - ya;
        if(ydist < 0) ydist *= -1;
        int total = xdist + ydist;
        if(xdist == 0 && ((ya < yf && yf < yb) || (yb < yf && yf < ya)) && xa == xf) total += 2;
        if(ydist == 0 && ((xa < xf && xf < xb) || (xb < xf && xf < xa)) && ya == yf) total += 2;
        cout << total << "\n";
    }
    return 0;
}