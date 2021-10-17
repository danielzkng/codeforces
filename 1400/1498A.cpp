#include <iostream>

using namespace std;

long long gcd (long long a, long long b){
    if (a == b) return a;
    if(a == 0) return b;
    if(b == 0) return a;
    if(a == 1 || b == 1) return 1;
    
    if(a > b){
        return gcd(a % b, b);
    }
    else{
        return gcd(a, b % a);
    }
}

long long digitSum(long long x){
    if (x == 0) return 0;
    else return (x % 10) + digitSum(x/10);
}

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        long long x;
        cin >> x;
        while(true){
            if(gcd(x, digitSum(x)) != 1){
                cout << x << endl;
                break;
            }
            x++;
        }
    }
    
    return 0;
}