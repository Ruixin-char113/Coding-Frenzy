#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	char c;
	string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	while(cin.get(c)){
		if(keyboard.find(tolower(c))!=-1){
			cout << keyboard[keyboard.find(tolower(c))-2];
		}
		else
			cout << c;
	}
}
