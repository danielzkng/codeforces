#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; ++iter){
        int n;
        cin >> n;
        if(n == 1 || n == 2 || n == 4) cout << "-1\n";
        else if(n == 7) cout << "0 0 1\n";
        else{
            int threes = 0;
            int fives = 0;
            switch(n % 3){
                case 0:
                    threes = n / 3;
                    break;
                case 1:
                    threes = (n - 10) / 3;
                    fives = 2;
                    break;
                default:
                    threes = (n - 5) / 3;
                    fives = 1;
            }
            cout << threes << " " << fives << " 0\n";
        }
    }
    
    return 0;
}