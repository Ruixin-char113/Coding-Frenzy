#include <iostream> 
#include <vector>
#include <stack>
using namespace std;

int main(){
	vector<int> a, b;
	
	int caseNumber = 0;
	cin >> caseNumber;
	
	bool isFirstCase = true;
	while(caseNumber--){
		if(isFirstCase)
			isFirstCase = false;
		else
			cout << endl;

		int M = 0;
		cin >> M;
		
		int ta, tb;
		a.clear(); b.clear();
		while(M--){
			cin >> ta >> tb;
			a.push_back(ta);
			b.push_back(tb);
		}
		
		int carry = 0;
		stack<int> ans;
		for(int i = a.size() - 1; i >= 0; i--){
			int sum = a[i] + b[i] + carry;
			ans.push(sum % 10);
			carry = sum / 10;
		}
		
		if(carry)
			ans.push(carry);
		while(!ans.empty()){
			cout << ans.top();
			ans.pop();
		}
		cout << endl;
	}
}