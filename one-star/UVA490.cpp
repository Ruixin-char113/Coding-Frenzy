#include <iostream>
#include <string>
using namespace std;

int main(){
	string s[100];
	int line=0;
	int length=0;
	while(getline(cin,s[line])){
		if(s[line].length()>length)
			length = s[line].length();
		line++;
	}
	
	for(int j=0;j<length;j++){
		for(int i=line-1;i>=0;i--){
			if(j>=s[i].length())
				cout << ' ';
			else
				cout << s[i][j];
		}
		cout << endl;
	}
}
