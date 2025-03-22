#include <iostream>
#include<math.h>
using namespace std;
int main(){
	int x;
	while(cin>>x){
		int data[10000];
		int max=0;
		long long ans=0;
		char check;
		while(cin>>data[max]){
			max++;
			cin.get(check);
			if(check=='\n')
				break;
		}
		for(int i=max-1,j=0;i>=0;i--,j++){
			ans+=data[i]*j*pow(x,j-1);
		}
		cout<<ans<<endl;
	}
}