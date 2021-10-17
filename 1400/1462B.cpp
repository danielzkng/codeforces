#include <iostream>
#include <string>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; iter++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int front = 0;
        int back = 0;
        if(s[0] == '2'){
            front++;
            if(s[1] == '0'){
                front++;
                if(s[2] == '2'){
                    front++;
                    if(s[3] == '0'){
                        front++;
                    }
                }
            }
        }
        
        if(s[n - 1] == '0'){
            back++;
            if(s[n - 2] == '2'){
                back++;
                if(s[n - 3] == '0'){
                    back++;
                    if(s[n - 4] == '2'){
                        back++;
                    }
                }
            }
        }
        
        if(front + back >= 4) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}