#include <iostream>
#include <string>
using namespace std;
int main(){
	string keyboard = " `1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	string input;
	while(getline(cin, input)){
		for(int i=0; i<input.length(); i++){
			for(int j=0; j<keyboard.length(); j++){
				if(input[i] == keyboard[j] && j!=0){
					cout << keyboard[j-1];	break;
				}
				if(input[i] == keyboard[j] && j==0){
					cout << keyboard[j];	break;
				}
			}
		}
		cout << endl;
	}
}
