#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(){
	//breadth first search starting at n and assembling
	
	int n;
	cin >> n;
	
	int difficulties[n];
	for(int i = 0; i < n; i++){
		cin >> difficulties[i];
	}
	
	//iterate over n?
	
	int maxlength = 0;
	
	int k = 0;
	int currmax = 0;
	int current = 0;
	
	while(k < n){
		if(current == 0){
			current++;
			currmax = difficulties[k] * 2;
			k++;
		}
		else{
			if(difficulties[k] <= currmax){
				currmax = difficulties[k] * 2;
				current++;
				k++;
			}
			else{
				if(current > maxlength){
					maxlength = current;
				}
				current = 0;
				currmax = 0;
			}
		}
	}
	
	if(current > maxlength){
		maxlength = current;
	}
	
	cout << maxlength << endl;
	
	return 0;
}