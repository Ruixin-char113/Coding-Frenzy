#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	bool count=true;
	while(getline(cin,s)){
		for(int i=0;i<s.length();i++){
			if(s[i]=='"'){
				if(count)
					cout << "``";
				else
					cout << "''";
				count=!count;
			}else{
				cout << s[i];
			}
		}
		cout << endl;
	}
}
