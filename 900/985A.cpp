#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int cells;
	cin >> cells;
	
	int positions[cells/2];
	for(int i = 0;i < cells/2; i++){
		cin >> positions[i];
	}
	
	sort(positions, positions + cells/2);
	
	//check odd
	int numOdd = 0;
	for(int i = 0; i < cells/2; i++){
		numOdd += abs((2 * i + 1) - positions[i]);
	}
	
	//check even
	int numEven = 0;
	for(int i = 0 ;i < cells/2; i++){
		numEven += abs((2 * (i + 1)) - positions[i]);
	}
	//return minimum
	cout << min(numOdd, numEven) << endl;
	return 0;
}