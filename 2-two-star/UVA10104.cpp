#include <iostream>
using namespace std;

struct Ans {
	int r; int s; int t;
};

// Extended Euclidean Algorithm
Ans EEA(int a, int b){
	int r1 = a, r2 = b, r,
		s1 = 1, s2 = 0, s,
		t1 = 0, t2 = 1, t,
		q;
		
	while(r2){
		q = r1 / r2;
		r = r1 % r2;
		s = s1 - s2 * q;
		t = t1 - t2 * q;
		
		r1 = r2; r2 = r;
		s1 = s2; s2 = s;
		t1 = t2; t2 = t;
	}
	
	Ans ans;
	ans.r = r1; ans.s = s1; ans.t = t1;
	return ans;
}

int main(){
	int A, B;
	while(cin >> A >> B){
		Ans ans = EEA(A, B);
		cout << ans.s << ' ' << ans.t << ' ' << ans.r << endl;
	}
}
