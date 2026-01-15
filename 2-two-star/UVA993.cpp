#include <iostream>
#include <stack>
using namespace std;

int main(){
	int c;
	cin >> c;
	while(c--){
		int n;
		cin >> n;
		stack<int> ans;
		
		// Special cases: 0, 1
		if(n == 0){
			cout << "10" << endl;
			continue;
		}
		if(n == 1){
			cout << "1" << endl;
			continue;
		}
		
		// Store
		for(int i = 9; i >= 2; i--){
			while(!(n % i)){
				ans.push(i);
				n /= i;
			}
		}
		
		// Output
		if(n > 10){
			cout << "-1" << endl;
			continue;
		}
		while(!ans.empty()){
			cout << ans.top();
			ans.pop();
		}
		cout << endl;
	}
}