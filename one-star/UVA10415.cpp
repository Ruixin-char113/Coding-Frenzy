#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	// Define table
	map<char, string> fingerTable;
	fingerTable['c'] = "0111001111";
	fingerTable['d'] = "0111001110";
	fingerTable['e'] = "0111001100";
	fingerTable['f'] = "0111001000";
	fingerTable['g'] = "0111000000";
	fingerTable['a'] = "0110000000";
	fingerTable['b'] = "0100000000";
	
	fingerTable['C'] = "0010000000";
	fingerTable['D'] = "1111001110";
	fingerTable['E'] = "1111001100";
	fingerTable['F'] = "1111001000";
	fingerTable['G'] = "1111000000";
	fingerTable['A'] = "1110000000";
	fingerTable['B'] = "1100000000";
	
	// Input number of case
	int t;
	cin >> t;
	string forGetline;
	getline(cin, forGetline);
	
	while(t--){
		// Input note;
		string note;
		getline(cin, note);
		
		// Count times
		string current = "0000000000";
		int ans[10] = { 0 };
		for(int i = 0; i < note.length(); i++){
			for(int j = 0; j < current.length(); j++){
				if(current[j] != fingerTable[note[i]][j] && current[j] == '0'){
					ans[j]++;
				}
			}
			current = fingerTable[note[i]];
		}
		
		// Output
		cout << ans[0];
		for(int i = 1; i < 10; i++){
			cout << ' ' << ans[i];
		}
		cout << endl;
	}
}