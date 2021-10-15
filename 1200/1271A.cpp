#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <vector>
 
using namespace std;

int min(int first, int last){
	return (first > last) ? last : first;
}

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int e, f;
	cin >> e >> f;
	int cost = 0;
	if(e > f){
		//type 1 suits are more expensive
		if(d > a){
			d -= a;
			cost += e * a;
			cost += f * min(min(b, c), d);
		}
		else{
			cost += e * d;
		}
	}
	else{
		int type2 = min(b, c);
		if(type2 < d){
			d -= type2;
			cost += f * type2;
			cost += e * min(a, d);
		}
		else{
			cost += f * d;
		}
	}
	
	cout << cost << endl;
	return 0;
}