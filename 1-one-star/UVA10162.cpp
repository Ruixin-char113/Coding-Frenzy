#include <iostream>
#include <cmath>
using namespace std;

int main(){
	string input;
	while(cin >> input && input != "0"){
		int l = input.length();
		int d = input[l-1] - '0';
		d += l>1 ? (input[l-2] - '0')*10 : 0;
		// 1 ~ d - d%20
		int sum = 0;
		sum += d / 20 * 14 % 10;
		d %= 20;
		// 1 ~ d%20
		for(int i=1; i<=d; i++){
			sum+=pow(i%10,(i-1)%4+1);
		}
		
		cout << sum%10 << endl;
	}
}

/*
#include <iostream>
#include <string>
#include <set>
using namespace std;

const int offSet[10] = {0,1,4,7,6,
						5,6,3,6,9};
set<int> sSet = {2,3,7,8};

int func(int mode, int number){
	int sum = 0;
	for(int i = 1; i <= number; i++){
		if(mode && sSet.count(i)){
			sum += offSet[10-i];
		}
		else{
			sum += offSet[i];
		}
	}
	return sum;
}

int main(){
	string input;
	
	while(getline(cin, input) && input != "0"){
		string temp;
		for(auto x:input){
			if('0' <= x && x <= '9')
				temp+=x;
		}
		input = temp;
		int d10 = input.length() > 1 ?
			input[input.length()-2]-'0' :
			0;
		int d1 = input[input.length()-1]-'0';
		
		if(d10%2)
			cout << (d10 * 7 + func(1,d1)) % 10 << endl;
		else
			cout << (d10 * 7 + func(0,d1)) % 10 << endl;
	}
}
*/