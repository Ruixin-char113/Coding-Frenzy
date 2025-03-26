#include <iostream>
#include <map>
using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	
	// create dictionary
	string key;
	int value;
	map<string, int> dict;
	while(m--){
		cin >> key >> value;
		dict[key] = value;
	}
	
	while(n--){
		int ans = 0;
		while(cin >> key){
			// Output
			if(key == "."){
				cout << ans << endl;
				break;
			}
			// Count salary
			else
				ans += dict[key];
		}
	}
}
