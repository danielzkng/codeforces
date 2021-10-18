#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int zzz = 0; zzz < cases; zzz++){
        long long rows, cols, n;
        cin >> rows >> cols >> n;
        
        long long row_num = (n - 1) % rows;
        long long col_num = (n - 1) / rows;
        
        long long out = row_num * cols + col_num + 1;
        
        cout << out << endl;
    }
    
    
    return 0;
}