#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    int a, b, c; // 1 2, 2 3, 3 1
    cout << "? 1 2\n";
    fflush(stdout);
    cin >> a;
    cout << "? 2 3\n";
    fflush(stdout);
    cin >> b;
    cout << "? 3 1\n";
    fflush(stdout);
    cin >> c;
    int sum = (a + b + c) / 2;
    arr.push_back(sum - b);
    arr.push_back(sum - c);
    arr.push_back(sum - a);
    int last = sum - a;
    for(int i = 4; i <= n; ++i){
        cout << "? " << i - 1 << " " << i << "\n";
        fflush(stdout);
        int x;
        cin >> x;
        x -= last;
        arr.push_back(x);
        last = x;
    }
    cout << "!";
    for(int i = 0; i < n; ++i){
        cout << " " << arr[i];
    }
    cout << "\n";
    fflush(stdout);
    return 0;
}