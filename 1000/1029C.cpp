#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

struct segment{
	int min;
	int max;
};

bool compare_by_min(segment first, segment next){
	return first.min < next.min;
}

bool compare_by_max(segment first, segment next){
	return first.max > next.max;
}

int main(){
	int n;
	cin >> n;
	
	vector<segment> segments;
	
	for(int i = 0; i < n; i++){
		segment toAdd;
		cin >> toAdd.min >> toAdd.max;
		segments.push_back(toAdd);
	}
	
	//get rid of max of mins
	int maximin;
	sort(segments.begin(), segments.end(), compare_by_min);
	
	int min = segments[n-2].min;
	int max = 1000000001;
	
	for(int i = 0; i < n - 1; i++){
		if(segments[i].max < max){
			max = segments[i].max;
		}
	}
	
	maximin = max - min;
	
	int minimax;
	sort(segments.begin(), segments.end(), compare_by_max);
	
	min = -1;
	max = segments[n - 2].max;
	
	for(int i = 0; i < n - 1; i++){
		if(segments[i].min > min){
			min = segments[i].min;
		}
	}
	
	minimax = max - min;
	
	if(0 > maximin && 0 > minimax){
		cout << 0 << endl;
	}
	
	else if(maximin > minimax){
		cout << maximin << endl;
	}
	else{
		cout << minimax << endl;
	}
	
	return 0;
}