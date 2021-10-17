#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    int A[m];
    int B[m];
    int C[m];
    int D[m];
    int E[m];
    for(int i = 0; i < m; ++i){
        A[i] = 0;
        B[i] = 0;
        C[i] = 0;
        D[i] = 0;
        E[i] = 0;
    }
    
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        for(int j = 0; j < m; ++j){
            switch(s[j]){
                case 'A':
                    ++A[j];
                    break;
                case 'B':
                    ++B[j];
                    break;
                case 'C':
                    ++C[j];
                    break;
                case 'D':
                    ++D[j];
                    break;
                case 'E':
                    ++E[j];
                    break;
                default:
                    int garbage = 3;
            }
        }
    }
    
    int total = 0;
    
    for(int i = 0; i < m; ++i){
        //cout << "question " << i << " ";
        int weight;
        cin >> weight;
        int max = -1;
        if(A[i] > max) max = A[i];
        if(B[i] > max) max = B[i];
        if(C[i] > max) max = C[i];
        if(D[i] > max) max = D[i];
        if(E[i] > max) max = E[i];
        
        //cout << weight << " " << max << "\n";
        
        total += weight * max;
    } 

    cout << total << "\n";
    return 0;
}