#include <iostream>
using namespace std;

int main(){
	int T;
	int countT = 0;
	cin >> T;
	while(T--){
		countT++;
		int a, b;
		int ans = 0;
		cin >> a >> b;
		if(a % 2 == 0)
			a += 1;
		if(b % 2 == 0)
			b -= 1;
		/*
		// other way
		for(int i = a; i <= b; i++){
			if(i % 2 == 1){
				ans += i;
			}
		}
		cout << "Case " << countT << ": " << ans << endl;
		*/
		ans = (a + b) * ((b - a) / 2 + 1) / 2;
		cout << "Case " << countT << ": " << ans << endl;
	}
}