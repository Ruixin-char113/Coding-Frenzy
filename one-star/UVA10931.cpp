#include <iostream>
#include <stack>
using namespace std;
int main(){
	int data;
	while(cin >> data){
		stack<int> binaryStack;
		int countBinary = 0;
		
		// data != 0
		if(data){
			cout << "The parity of ";
			
			// Store binary
			while(data > 1){
				binaryStack.push(data % 2);
				data /= 2;
			}
			binaryStack.push(data);
			
			// Output binary
			while(!binaryStack.empty()){
				if(binaryStack.top()){
					countBinary++;
				}
				cout << binaryStack.top();
				binaryStack.pop();
			}
			cout << " is " << countBinary << " (mod 2)." << endl;
		}
		else{
			break;
		}
	}
}