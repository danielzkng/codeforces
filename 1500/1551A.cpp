#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int iter = 0; iter < n; ++iter){
        int k;
        cin >> k;
        int div3 = k / 3;
        switch(k % 3) {
            case 0:
                cout << div3 << " " << div3 << "\n";
                break;
            case 1:
                cout << div3 + 1 << " " << div3 << "\n";
                break;
            default:
                cout << div3 << " " << div3 + 1 << "\n";
        }
    }
    return 0;
}