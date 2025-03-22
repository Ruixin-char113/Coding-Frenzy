#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <set>
using namespace std;

void setOrientation(const vector<char>& o, char* current_o, char command){
	for(int i = 0; i < o.size(); i++){
		if(o[i] == *current_o){
			if(command == 'L'){
				i = (i + 3) % 4;
			}
			else if(command == 'R'){
				i = (i + 1) % 4;
			}
			*current_o = o[i];
			return;
		}
	}
}

int main(){
	// Input upper-right
	int upR_x = 0, upR_y = 0;
	cin >> upR_x >> upR_y;
	
	// Create orientation : forward value
	map<char, pair<int, int>> mapTable = {
		{'N', {0, 1}},
		{'E', {1, 0}},
		{'S', {0, -1}},
		{'W', {-1, 0}}
	};
	
	// Orientation table
	vector<char> o = {'N', 'E', 'S', 'W'};
	
	// Record scent
	set<pair<int, int>> scent;

	int current_x = 0, current_y = 0;
	char current_o = 'N';
	while(cin >> current_x >> current_y >> current_o){
		bool isLost = false;
		// Temporary position
		int t_x = current_x, t_y = current_y;
		
		// Input commands
		string commands;
		cin >> commands;
		
		// Parse command
		for(int i = 0; i < commands.length(); i++){
			switch (commands[i]){
				case 'L':
				case 'R':
					setOrientation(o, &current_o, commands[i]);
					break;
				case 'F':
					t_x = current_x + mapTable[current_o].first;
					t_y = current_y + mapTable[current_o].second;
					break;
			}
			
			// Check out of bounds
			if(t_x > upR_x || t_x < 0 ||
			   t_y > upR_y || t_y < 0){
			   
				pair<int, int> tpair(current_x, current_y);

				// In set of scent
				if(scent.find(tpair) != scent.end()){
					continue;
				}
				// Add to set of scent
				else{
					isLost = true;
				   	scent.insert(tpair);
				   	break;
				}
			}
			
			// Update position
			current_x = t_x;
			current_y = t_y;
		}

		// Output
		cout << current_x << ' ' << current_y << ' ' << current_o;
		if(isLost)
			cout << ' ' << "LOST";
		 cout << endl;
	}
}