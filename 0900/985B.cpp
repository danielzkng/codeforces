#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	int switches;
	int lamps;
	cin >> switches >> lamps;
	
	int switchArray[switches][lamps];
	int totals[lamps];
	
	for(int i = 0; i < lamps; i++){
		totals[i] = 0;
	}
	
	for(int i = 0; i < switches; i++){
		string currentSwitch;
		cin >> currentSwitch;
		for(int j = 0; j < lamps; j++){
			if(currentSwitch[j] == '1'){
				switchArray[i][j] = 1;
				totals[j]++;
			}
			else{
				switchArray[i][j] = 0;
			}
		}
	}
	
	for(int i = 0; i < switches; i++){
		bool rowWorks = true;
		for(int j = 0; j < lamps; j++){
			if(totals[j] - switchArray[i][j] == 0){
				rowWorks = false;
				break;
			}
		}
		if(rowWorks){
			cout << "YES" << endl;
			return 0;
		}
	}
	
	cout << "NO" << endl;
	return 0;
}