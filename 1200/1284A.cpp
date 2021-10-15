#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <vector>
 
using namespace std;

int main(){	
	int n, m;
	cin >> n >> m;
	string x[n];
	for(int i = 0; i < n; i++){
		cin >> x[i];
	}
	string y[m];
	for(int i = 0; i < m; i++){
		cin >> y[i];
	}
	
	int trials;
	cin >> trials;
	for(int i = 0; i < trials; i++){
		int a;
		cin >> a;
		int b = a % n - 1;
		if(b == -1) b = n - 1;
		int c = a % m - 1;
		if(c == -1) c = m - 1;
		cout << x[b] << y[c] << endl;
	}
	
	return 0;
}