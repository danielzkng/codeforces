#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        int length;
        cin >> length;
        int prev;
        cin >> prev;
        int curr;
        int out = 0;
        for(int i = 1; i < length; i++){
            cin >> curr;
            while(curr > 2 * prev){
                prev *= 2;
                out++;
            }
            while(curr * 2 < prev){
                prev += prev % 2;
                prev /= 2;
                out++;
            }
            prev = curr;
        }
        
        cout << out << endl;
    }
    
    return 0;
}