#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	string repeater;
	cin >> repeater;
	
	int midlength = 0;
	
	for(int i = 1; i < n; i++){
		if(repeater.substr(0, i) == repeater.substr(n - i, i)){
			midlength = i;
		}
	}
	
	for(int i = 0; i < k - 1; i++){
		cout << repeater.substr(0, n - midlength);
	}
	cout << repeater << endl;
}