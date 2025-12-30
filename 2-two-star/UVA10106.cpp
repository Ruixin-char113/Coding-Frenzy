
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main(){
	string a, b;
	while(cin >> a >> b){
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		
		array<int, 500> ans = {0};
		
		for(int i=0; i<a.length(); i++){
			int carry=0;
			for(int j=0; j<b.length(); j++){
				int temp=(a[i]-'0')*(b[j]-'0')+carry;
				// Store to ans[]
				int ansLoc=i+j;
				carry = (ans[ansLoc]+temp)/10;
				ans[ansLoc] = (ans[ansLoc]+temp)%10;
			}
			if(carry)
				ans[i+b.length()] += carry;
		}
		
		// Output
		reverse(ans.begin(),ans.end());
		bool startFlag=false;
		for(int i:ans){
			if(!i && !startFlag)
				continue;
			cout << i;
			startFlag = true;
		}
		// 0 * N
		if(!startFlag) cout << "0";
		
		cout << endl;
	}
}

