#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <vector>
 
using namespace std;

int main(){	
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		long long k;
		cin >> k;
		if(k % 14 >= 1 && k % 14 <= 6 && k > 12) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}