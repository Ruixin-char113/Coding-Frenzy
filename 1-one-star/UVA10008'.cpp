#include <iostream>
#include <cctype>
using namespace std;
//A:65; a:97

int main(){
	int ansArr[256]={0};
	int max=0;
	
	char c;
	while(cin >> c){
		ansArr[toupper(c)] += 1;
		
		if(ansArr[toupper(c)] > max)
			max = ansArr[toupper(c)];
	}
	
	while(max){
		for(char c='A' ; c<='Z'; c++){
			if(max == ansArr[c] && ansArr !=0)
				cout << c << ' ' << ansArr[c] << endl;
		}
		max--;
	}	
}
