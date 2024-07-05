#include <iostream>
#include <string>
using namespace std;

void count(string in,int arr[]){
	for(int i=0;i<in.length();i++){
		arr[in[i]-'a']+=1;
	}
}

int main(){
	string a,b;
	while(getline(cin,a)&&getline(cin,b)){
		int c[26]={0}, d[26]={0};
		
		count(a,c);
		count(b,d);
		
		for(int i=0;i<26;i++)
			while(c[i]&&d[i]){
				cout<<char('a'+i);
				c[i]--; d[i]--;
			}
		cout << endl;
	}
}
