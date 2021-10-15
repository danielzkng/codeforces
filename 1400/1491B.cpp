#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int i = 0; i < cases; i++){
        int rows, u, v;
        cin >> rows >> u >> v;
        
        bool vertical = true;
        bool total = true;
        int current = -1;
        for(int j = 0; j < rows; j++){
            int input;
            cin >> input;
            if(current == -1){
                current = input;
            }
            else{
                if(current == input + 1 || current == input - 1){
                    vertical = false;
                }
                else if(current != input){
                    total = false;
                    vertical = false;
                }
            }
        }
        int min;
        if(u < v) min = u;
        else min = v;
        
        if(vertical){
            cout << v + min << endl;
        }
        else if (total){
            cout << min << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    
    
    return 0;
}