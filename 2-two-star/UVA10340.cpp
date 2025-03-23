#include <iostream>
using namespace std;

int main(){
	string t, s;
	
	while(cin >> s >> t){
		int index_s = 0;
		int index_t = 0;
		
		while(index_s < s.length()){
			// Out of range
			if(index_t >= t.length())
				break;
			// Found same character
			if(s[index_s] == t[index_t]){
				index_s++;
			}
			// Next t's character
			index_t++;
		}
		
		// Output
		if(index_s < s.length())
			cout << "No";
		else
			cout << "Yes";
		cout << endl;
	}
}