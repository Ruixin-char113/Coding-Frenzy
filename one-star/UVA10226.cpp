#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main(){
	// Input rst, remove character
	int rst = 0;
	cin >> rst;
	string line;
	getline(cin, line);
	getline(cin, line);

	string treeName;
	map<string, int> mapTree;
	map<string, int>::iterator it;
	while(rst--){
		int count = 0;
		while(!cin.eof()){
			getline(cin, treeName);
			
			if(treeName == ""){
				break;
			}
			
			count++;
			// Update / Add data
			it = mapTree.find(treeName);
			if(it == mapTree.end())
				mapTree[treeName] = 1;
			else
				mapTree[treeName]++;
		}
		
		// Output
		for(it = mapTree.begin(); it != mapTree.end(); it++){
			cout << it->first << ' ';
			cout << fixed << setprecision(4) << (double)it->second * 100 / count << endl;
		}				
		if(rst)
			cout << endl;
		mapTree.clear();
	}
}