#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int d = 1; int x = 1;
		while(d%=n){
			d = d*10+1;
			x++;
		}
		cout << x << endl;
	}
}