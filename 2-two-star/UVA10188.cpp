#include <iostream>
#include <stack>
using namespace std;

int main(){
	int caseNumber = 0;
	int lineA, lineB;
	char c;
	string temp;
	while(cin >> lineA && lineA){
		// store: all char, numeric char
		stack<char> stackA, stacknA;
		stack<char> stackB, stacknB;
		
		cout << "Run #" << ++caseNumber << ": ";
		
		// Input A
		getchar();
		while(lineA){
			c = cin.get();
			if(c == '\n')
				lineA--;
			if('0' <= c && c <= '9')
				stacknA.push(c);
			stackA.push(c);
		}
		// Input B
		cin >> lineB;
		getchar();
		while(lineB){
			c = cin.get();
			if(c == '\n')
				lineB--;
			if('0' <= c && c <= '9')
				stacknB.push(c);
			stackB.push(c);
		}
		
		// Output
		if(stackA == stackB)
			cout << "Accepted";
		else if(stacknA == stacknB)
			cout << "Presentation Error";
		else
			cout << "Wrong Answer";
		cout << endl;
	}
}