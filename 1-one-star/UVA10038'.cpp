#include <iostream>	
#include <set>
using namespace std;

int main(){
	int number;
	while(cin >> number){
		int n =number;
		int a;
		set<int> s;
		cin >> a;
		while(--n){
			int b;
			cin >> b;
				if(abs(a-b)&&abs(a-b)<number)
					s.insert(abs(a-b));
			a=b;
		}
		if(s.size()==number-1)
			cout << "Jolly" <<endl;
		else
			cout << "Not jolly" << endl;
	}
}