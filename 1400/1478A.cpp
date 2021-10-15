#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int cas = 0; cas < t; cas++){
        int n;
        cin >> n;
        int colours = 1;
        int current_number = -1;
        int count_of_current = 0;
        for(int i = 0; i < n; i++){
            int input;
            cin >> input;
            if(input != current_number){
                count_of_current = 1;
                current_number = input;
            }
            else{
                count_of_current++;
                if(colours < count_of_current) colours = count_of_current;
            }
        }
        cout << colours << endl;
    }
    
    return 0;
}