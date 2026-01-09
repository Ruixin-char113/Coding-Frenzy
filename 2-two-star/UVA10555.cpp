#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int fgcd(int a, int b){
	while(a %= b){
		swap(a,b);
	}
	return b;
}

int main(){
	string input;

	while(cin >> input && input != "0"){
		input = input.substr(2,input.length()-5);
		pair<int, int> ans(0,0);
		
		for(int m=1; m<=input.length(); m++){
			int n = input.length()-m;
			string A = input.substr(0, n);
			string B = input.substr(n, m);
			int a = A.empty() ? 0 : stoi(A);
			int b = B.empty() ? 0 : stoi(B);
			
			// Numerator, Denominator
			int N = a*pow(10,m)+b-a;
			int D = pow(10,m+n) - pow(10,n);
			
			// GCD
			int gcd = fgcd(N, D);
			N /= gcd; D /= gcd;
			
			if(m==1 || ans.second > D){
				ans.first = N; ans.second = D;
			}
		}
	
		cout << ans.first << '/' << ans.second << endl;
	}
}