#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d;
    scanf("%d:%d\n", &a, &b);
    scanf("%d:%d\n", &c, &d);
    int first = 60 * a + b;
    int second = 60 * c + d;
    int avg = (first + second) / 2;
    cout << (avg / 60 < 10 ? "0" : "") << avg / 60 << ":" << (avg % 60 < 10 ? "0" : "") << avg % 60 << "\n";
    return 0;
}