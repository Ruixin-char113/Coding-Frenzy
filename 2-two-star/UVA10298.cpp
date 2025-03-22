#include <iostream>
using namespace std;

int main(){
	string input;
	while(cin >> input){
		if(input == ".")
			break;
		
		int ans = 1;
		bool isOk = false;
		for(int i = 0; i < input.length(); i++){
			// Found string a
			if(isOk)
				break;

			// Update new compare string b
			string b = input.substr(0,i+1);
			
			ans = 1;
			for(int j = 0; j < input.length(); j += (i+1)){
				// Update new compare string c
				string c = input.substr(j, i+1);
				
				if(b != c){
					isOk = false;
					break;
				}
				else{
					isOk = true;
					ans++;
				}
			}			
		}
		
		// Output
		cout << --ans << endl;
	}
}