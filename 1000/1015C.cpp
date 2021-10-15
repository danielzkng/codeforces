#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

struct song{
	int uncompressed;
	int compressed;
	int difference;
};

bool compare_songs(song first, song next){
	return first.difference > next.difference;
}

int main(){
	int songs, capacity;
	cin >> songs >> capacity;
	
	vector<song> playlist;
	long long totalUncomp = 0;
	long long totalComp = 0;
	
	for(int i = 0; i < songs; i++){
		song toAdd;
		cin >> toAdd.uncompressed >> toAdd.compressed;
		totalComp += toAdd.compressed;
		totalUncomp += toAdd.uncompressed;
		toAdd.difference = toAdd.uncompressed - toAdd.compressed;
		playlist.push_back(toAdd);
	}
	
	sort(playlist.begin(), playlist.end(), compare_songs);
	
	if(totalComp > capacity){
		cout << "-1" << endl;
	}
	else{
		int count = 0;
		while(totalUncomp > capacity){
			totalUncomp -= playlist[count].difference;
			count++;
		}
		cout << count << endl;
	}
	
	return 0;
}