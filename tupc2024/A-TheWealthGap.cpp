#include <iostream>
using namespace std;
int main(){
	int kase;
	cin >>kase;
	while(kase--){
		int datan;
		cin >> datan;
		int *data = new int[datan];
		for(int i=0;i<datan;i++){
			cin >> data[i];
		}
		int ans;
		for(int i=0;i<datan;i++){
			for(int j=i+1;j<datan;j++){
				if(!i&&(j==1)){
					ans=data[0]-data[1];
				}			
				if(ans<data[i]-data[j])
					ans=data[i]-data[j];
			}
		}
		cout<<ans<<endl;
		delete []data;
	}
}
