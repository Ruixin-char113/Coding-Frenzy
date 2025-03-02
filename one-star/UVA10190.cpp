#include <iostream>
#include <queue>
using namespace std;

int main(){
	int tempA = 0, tempB = 0;
	while(cin >> tempA >> tempB){
		int n = 0, m = 0;
		n = max(tempA, tempB);
		m = min(tempA, tempB);
		
		// Create output queue && judge boring
		bool boring = false;
		queue<int> output;
		if((n < 2) || (m < 2)){
			boring = true;
		}
		else{
			while(1){				
				output.push(n);
				if(n == 1){
					break;
				}
				else if(!(n % m)){
					n /= m;
				}
				else{
					boring = true;
					break;
				}	
			}
		}		
		
		// Output
		if(!boring){
			while(!output.empty()){
				cout << output.front();
				output.pop();
				if(!output.empty()){
					cout << ' ';
				}
			}
		}
		else{
			cout << "Boring!";
		}
		cout << endl;
	}
}