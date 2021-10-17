#include <iostream>
#include <string>

using namespace std;

int main(){
    int len;
    cin >> len;
    
    int designers;
    cin >> designers;
    
    string in;
    cin >> in;
    
    char alphabet[26];
    for(int i = 0; i < 26; i++){
        alphabet[i] = 'a' + i;
    }
    
    for (int i = 0; i < designers; i++){
        string a, b;
        cin >> a >> b;
        char c1 = a[0];
        char c2 = b[0];
        
        for(int i = 0; i < 26; i++){
            if(alphabet[i] == c1) alphabet[i] = c2;
            else if(alphabet[i] == c2) alphabet[i] = c1;
        }
    }
    
    string out = "";
    
    for(int i = 0; i < len; i++){
       int index = in[i] - 'a';
       out.push_back(alphabet[index]);
    }
    
    cout << out << endl;
    
    return 0;
}