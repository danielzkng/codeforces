#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> rats;
    vector<string> wnc;
    vector<string> crew;
    string captain;
    for(int i = 0; i < n; ++i) {
        string a, b;
        cin >> a >> b;
        if(b.compare("rat") == 0) rats.push_back(a);
        if(b.compare("woman") == 0) wnc.push_back(a);
        if(b.compare("child") == 0) wnc.push_back(a);
        if(b.compare("man") == 0) crew.push_back(a);
        if(b.compare("captain") == 0) captain = a;
    }
    for(int i = 0; i < rats.size(); ++i) {
        cout << rats[i] << "\n";
    }
    
    for(int i = 0; i < wnc.size(); ++i) {
        cout << wnc[i] << "\n";
    }
    
    for(int i = 0; i < crew.size(); ++i) {
        cout << crew[i] << "\n";
    }
    
    cout << captain << "\n";
    return 0;
}