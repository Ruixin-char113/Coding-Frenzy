#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;
	string w[7]={"Monday","Tuesday","Wednesday","Thursday",
					"Friday","Saturday","Sunday"};
	int mm[12]{31,28,31,30,31,30,31,31,30,31,30,31};
	while(n--){
		int m,d;
		int count=0;
		cin >> m >> d;
		for(int i=0;i<m-1;i++){
			count+=mm[i];
		}
		count+=d;
		cout<<w[(count+4)%7]<<endl;
	}
}