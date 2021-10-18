#include <iostream>
#include <string>

using namespace std;

int main(){
    int chars;
    string out = "";
    cin >> chars;
    
    for(int i = 0; i < chars; i++){
        int a, b, f;
        cin >> a >> b >> f;
        int d, e;
        cin >> d >> e;
        
        int hash1 = 9 * a + 3 * b + f;
        int hash2 = 4 * d + e;
        
        char c;
        switch(hash1){
            case 9:
                c = 'a';
                break;
            case 10:
                c = 'k';
                break;
            case 11:
                c = 'u';
                break;
            case 12:
                if(hash2 == 8) c = 'b';
                else c = 'e';
                break;
            case 13:
                if(hash2 == 12) c = 'l';
                else c = 'o';
                break;
            case 14:
                if(hash2 == 13) c = 'v';
                else c = 'z';
                break;
            case 15:
                if(hash2 == 9) c = 'h';
                else c = 'j';
                break;
            case 16:
                if(hash2 == 13) c = 'r';
                else if(hash2 == 10) c = 't';
                else c = 'w';
                break;
            case 18:
                c = 'c';
                break;
            case 19:
                c = 'm';
                break;
            case 20:
                c = 'x';
                break;
            case 21:
                if(hash2 == 6) c = 'd';
                else c = 'f';
                break;
            case 22:
                if(hash2 == 10) c = 'n';
                else c = 'p';
                break;
            case 23:
                c = 'y';
                break;
            case 24:
                c = 'g';
                break;
            case 25:
                c = 'q';
                break;
            default:
                c = ' ';
        }
        
        out += c;
    }
    
    cout << out << endl;
    return 0;
}