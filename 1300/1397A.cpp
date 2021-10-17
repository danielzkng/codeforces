#include <iostream>
#include <string>

using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int iter = 0; iter < cases; iter++){
        int s;
        cin >> s;
        
        int letters[26];
        for(int i = 0; i < 26; i++){
            letters[i] = 0;
        }
        
        for(int i = 0; i < s; i++){
            string a;
            cin >> a;
            for(int j = 0; j < a.length(); j++){
                int index = a[j] - 'a';
                letters[index]++;
            }
        }
        
        bool valid = true;
        for(int i = 0; i < 26; i++){
            valid = valid && (letters[i] % s == 0);
        }
        
        if(valid) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}