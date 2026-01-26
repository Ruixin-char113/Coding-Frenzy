#include <iostream>
using namespace std;

int josephus(int n, int m){
	int sum = 1;
	for(int i=2; i<=n; i++){
		// (prePosition - base + offset) % number + base
		sum = (sum - 1 + m) % i + 1;
	}
	return sum;
	/*
	if(n == 1)
		return 0;
	else
		return (josephus(n-1, m)+m)%n;
	*/
}

int main(){
	int N;
	while(cin >> N && N){
		for(int i = 1; ; i++){
			// Josephus: 2 ~ N =(delete '1')=> 1 ~ N-1
			if(josephus(N-1, i)==12){
				cout << i << endl;
				break;
			}
		}
	}
}

/*
#include <iostream>
#include <queue>
using namespace std;

int main(){
	int N;
	while(cin >> N && N){
		queue<int> currentQ;
		int ans=1;
		while(1){
			while(!currentQ.empty())
				currentQ.pop();
			for(int i=1; i<=N; i++){
				currentQ.push(i);
			}
			
			int count = ans - 1;
			while(1){
				count++;
				if(count < ans){
					currentQ.push(currentQ.front());
				}
				else{
					count = 0;
					if(currentQ.front()==13)
						break;
				}
				currentQ.pop();
			}
			
			if(currentQ.size() == 1)
				break;
			
			ans++;
		}
		cout << ans << endl;		
	}
}
*/