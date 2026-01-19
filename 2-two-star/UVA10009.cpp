#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

map<string, string> road;

// Find path "input -> Rome"
string findP(string input){
	string P;
	do{
		P += input[0];
		input = road[input];
	}while(road.find(input) != road.end());
	P += 'R';
	return P;
}

int main(){
	int c;
	cin >> c;
	while(c--){
		int m, n;
		cin >> m >> n;
		
		// Store road information
		road.clear();
		string begin, end;
		while(m--){
			cin >> begin >> end;
			road[end] = begin;
		}
		
		while(n--){
			cin >> begin >> end;
			
			string pathA = findP(begin);
			string pathB = findP(end);
			
			// Remove same path
			int ai = pathA.length()-1, bi = pathB.length()-1;
			while(pathA[ai] == pathB[bi]){
				ai--; bi--;
			}
			pathA = pathA.substr(0, ai+2);
			pathB = pathB.substr(0, bi+1);
			reverse(pathB.begin(), pathB.end());
			
			// Output
			cout << pathA << pathB << endl;
		}
	}
}