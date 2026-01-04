#include <iostream>
#include <iomanip>
using namespace std;

int pow(int b, int e){
	int o = 1;
	if(!e)
		return o;
	while(e--){
		o *= b;
	}
	return o;
}

void find(const int x){
	for(int i = 0; pow(i, 2) < pow(10, x); i++){
		int temp = pow(i, 2);
		int head = temp / pow(10, x/2);
		int tail = temp % pow(10, x/2);
		
		if(pow((head+tail), 2) == temp)
			cout << setw(x) << setfill('0')
				<< temp << endl;
	}
}

int main(){
	int x;
	while(cin >> x){
		find(x);
	}
}