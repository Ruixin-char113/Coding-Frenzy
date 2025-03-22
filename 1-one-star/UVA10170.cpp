#include<iostream>
using namespace std;
int main(){
	long long s,d;
	while(cin>>s>>d){
		long long ans=0;
		for(long long i=0;i<d;){
			i+=s;
			ans=s;
			s++;
		}
		cout<<ans<<endl;
	}
}