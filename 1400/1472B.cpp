#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        int len;
        cin >> len;
        int candies[3];
        for(int i = 0; i < 3; i++){
            candies[i] = 0;
        }
        for(int i = 0; i < len; i++){
            int in;
            cin >> in;
            candies[in]++;
        }
        
        if(candies[1] % 2 == 1 || (candies[1] == 0 && candies[2] % 2 == 1)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}