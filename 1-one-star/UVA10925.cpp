#include <iostream>
#include <algorithm>
using namespace std;

string addString(string &a, string &b){	
	if(a.length() < max(a.length(), b.length()))
		swap(a, b);
	
	int carry = 0;
	for(int i=0; i<a.length(); i++){
		int temp = a[i] - '0' + carry;
		if(i < b.length()) temp += b[i] - '0';
		
		a[i] = temp % 10 + '0';
		carry = temp / 10;
	}
	if(carry)
		a += carry + '0';
	
	return a;
}

string divideString(string &c, const int f){
	string p = "";
	
	int d = 0;
	bool isHead = true;
	for(int i = c.length()-1; i>=0; i--){
		d *= 10; d += c[i] - '0';
		
		if(isHead && d > f)
			isHead = false;
		if(!isHead)
			p += d / f + '0';
		d %= f;
	}
	
	if(p.empty())
		p = "0";
	return p;
}

int main(){
	int billN = 0;
	int N, F;
	while(cin >> N >> F && N && F){
		billN++;
		string C = "0";
		for(int i=0; i<N; i++){
			string input; cin >> input; reverse(input.begin(), input.end());
			C = addString(C, input);
		}
		
		string P = divideString(C, F);
		
		reverse(C.begin(), C.end());
		cout << "Bill #" << billN
			<< " costs " << C
			<< ": each friend should pay " << P 
			<< endl << endl;
	}
}