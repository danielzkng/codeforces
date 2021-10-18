#include <iostream>
#include <string>

using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    
    string cake[h];
    for(int i = 0; i < h; i++){
        cin >> cake[i];
    }
    
    int row = 0;
    int col = 0;
    int berries = 0;
    
    if(cake[0][0] == '*') berries = 1;
    
    while(row != h - 1 || col != w - 1){
        if(row == h - 1) col++;
        else if(col == w - 1) row++;
        else if(cake[row][col + 1] == '*') col++;
        else if(cake[row + 1][col] == '*') row++;
        else col++;
        
        if(cake[row][col] == '*') berries++;
    }
    
    cout << berries << endl;
}