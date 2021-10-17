#include <iostream>

using namespace std;

int ceildiv(int num, int den){
    if(num % den == 0) return num/den;
    return num / den + 1;
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << ceildiv(2 * n, k) + ceildiv(5 * n, k) + ceildiv(8 * n, k) << "\n";
    return 0;
}