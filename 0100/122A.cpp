#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[] = {4, 7, 47, 74, 447, 474, 477, 744, 747, 774};
    for(int i = 0; i < 10; ++i) {
        if(n % arr[i] == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}