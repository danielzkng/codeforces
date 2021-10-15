#include <iostream>
#include <string>

using namespace std;

int main(){
	int length;
	cin >> length;
	string targetstring;
	cin >> targetstring;
	
	int movesNeeded = length;
	
	for(int i = 1; i <= (length / 2); i++){
		if(targetstring.substr(0, i) == targetstring.substr(i, i)){
			movesNeeded = length + 1 - i;
		}
	}
	
	cout << movesNeeded << endl;

	return 0;
}