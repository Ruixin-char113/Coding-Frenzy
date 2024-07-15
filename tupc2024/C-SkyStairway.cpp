#include <iostream>
using namespace std;
int main(){
	int kase;
	cin >> kase;
	while(kase--){
		int n;
		int ans=0;
		bool fbreak=0;
		cin >> n;
		int *data=new int[n];
		for(int i=0;i<n;i++){
			cin >> data[i];
		}
		for(int i=0;i<n-1;){
			if(i+2<n){
				if(data[i+2]==0){
					i+=2;
					ans++;
				}else if(data[i+1]==0){
					i+=1;
					ans++;
				}else{
					fbreak=1;
					break;
				}
			}else{
				ans++;
				break;
			}
		}
		if(fbreak)
			cout<<"-1\n";
		else
			cout<<ans<<endl;
		delete []data;
	}
}