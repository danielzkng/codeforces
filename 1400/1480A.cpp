#include <iostream>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    
    for(int iter = 0; iter < cases; iter++){
        string s;
        cin >> s;
        
        for(int i = 0; i < s.length(); i++){
            if(i % 2 == 0){
                if(s[i] == 'a') s[i] = 'b';
                else s[i] = 'a';
            }
            else{
                if(s[i] == 'z') s[i] = 'y';
                else s[i] = 'z';
            }
        }
        
        cout << s << endl;
    }
    
    return 0;
}