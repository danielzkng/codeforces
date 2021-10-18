#include <bits/stdc++.h>

using namespace std;

double dist(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int main(){
    int n, k;
    cin >> n >> k;
    double x0, y0;
    cin >> x0 >> y0;
    double out = 0.0;
    for(int i = 1; i < n; ++i){
        double a, b;
        cin >> a >> b;
        out += dist(x0, y0, a, b);
        x0 = a;
        y0 = b;
    }
    cout << setprecision(20) << (double)k * out / 50.0 << "\n";
    return 0;
}