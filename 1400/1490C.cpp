#include <iostream>
#include <set>

using namespace std;

int main(){
    set <long long, greater<long long>> cubes;
    for(long long i = 1; i < 10000; i++){
        cubes.insert(i * i * i);
    }
    
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        long long in;
        bool viable = false;
        cin >> in;
        for(long long i = 1; i < 10000; i++){
            if(i * i * i > in) break;
            if(cubes.count(in - (i * i * i)) != 0){
                viable = true;
                break;
            }
        }
        if(viable) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}