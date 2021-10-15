#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <vector>
 
using namespace std;

int main(){
	//get number of trials
	int n;
	cin >> n;
	//loop
	for(int i = 0; i < n; i++){
		int sections, radis;
		cin >> radis >> sections;
		int amountPer = sections/radis;
		int leftover = sections % radis;
		int total = leftover * (amountPer + 1) * (amountPer + 1) + (radis - leftover) * amountPer * amountPer;
		cout << total << endl;
	}
	
	return 0;
}