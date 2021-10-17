#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int iter = 0; iter < t; ++iter){
        int n;
        cin >> n;
        double total = 0.0F;
        int max = -2147000000;
        for(int i = 0; i < n; ++i){
            int k;
            cin >> k;
            total += k;
            if(k > max) {
                max = k;
            }
        }
        total -= max;
        double a = total / ((double)n - 1.0F);
        double b = (double)max;
        cout << setprecision(8) << a + b << "\n";
    } 
    return 0;
}  