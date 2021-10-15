#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <vector>
 
using namespace std;

bool isRed(string in){
	bool allZeroes = true;
	
	int digitSum = 0;
	bool hasEven = false;
	bool hasZero = false;
	while(in != ""){
		char next = in.at(0);
		if(next == '0'){
			if (hasZero) hasEven = true;
			else hasZero = true;
		}
		else if(next == '2' || next == '4' || next == '6' || next == '8'){
			hasEven = true;
			allZeroes = false;
		}
		else allZeroes = false;
		
		digitSum += (int)next - '0';
		in = in.substr(1);
	}
	return allZeroes || ((digitSum % 3 == 0) && hasEven && hasZero);
}

int main(){
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		string k;
		cin >> k;
		if(isRed(k)) cout << "red" << endl;
		else cout << "cyan" << endl;
	}
	
	return 0;
}