#include <iostream>
using namespace std;
int main(){
	string input;
	while(cin >> input){
		long long total=0;
		int Max=1;
                                                  //count
		for(int i=0; i<input.length(); i++){
			int add=0;
			if(input[i]=='+' || input[i]=='-')
				continue;
			if(65 <=input[i]&&input[i]<=90)
				add=input[i]-55;
			else if(97 <=input[i]&&input[i]<=122)
				add=input[i]-61;
			else if(48 <=input[i]&&input[i]<=57)
				add=input[i]-48;
			if(add > Max)		Max = add;
			total+=add;
		}
                                                  //division
		int Ans=0;
		bool notYet = 1;
		for(int i=Max; i<62; i++){
			if(!(total%i)){
				Ans=i+1;
				cout << Ans << endl;
				notYet = 0;
				break;
			}
		}
		if(notYet)
			cout << "such number is impossible!" << endl;
	}
}
