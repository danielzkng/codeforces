#include <iostream>
#include <string>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int zzz = 0; zzz < cases; zzz++){
        int len;
        cin >> len;
        string grid[len];
        
        for(int i = 0; i < len; i++){
            cin >> grid[i];
        }
        
        int x1, y1, x2, y2;
        bool first = false;
        for(int i = 0; i < len; i++){
            for(int j = 0; j < len; j++){
                if(grid[i][j] == '*'){
                    if(first){
                        x2 = i;
                        y2 = j;
                    }
                    else{
                        x1 = i;
                        y1 = j;
                        first = true;
                    }
                }
            }
        }
        
        if(x1 != x2 && y1 != y2){
            grid[x1][y2] = '*';
            grid[x2][y1] = '*';
        }
        
        if(x1 == x2 && x1 != 0){
            grid[0][y1] = '*';
            grid[0][y2] = '*';
        }
        
        if(x1 == x2 && x1 == 0){
            grid[1][y1] = '*';
            grid[1][y2] = '*';
        }
        
        if(y1 == y2 && y1 != 0){
            grid[x1][0] = '*';
            grid[x2][0] = '*';
        }
        
        if(y1 == y2 && y1 == 0){
            grid[x1][1] = '*';
            grid[x2][1] = '*';
        }
        
        for(int i = 0; i < len; i++){
            cout << grid[i] << endl;
        }
    }
    
    return 0;
}