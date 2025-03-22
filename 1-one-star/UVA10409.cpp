#include <iostream>
using namespace std;

int main(){
	int commandNumber = 0;
	// Input number of following command
	while(cin >> commandNumber && commandNumber){
		// Init
		int top=1, north=2, west=3, east=4, south=5, bottom=6;
		int temp=0;
		
		while(commandNumber--){
			// Input command
			string command;
			cin >> command;
			
			// Move digit
			temp = bottom;
			if(command == "north"){
				bottom = north; north = top;
				top = south;	south = temp;
			}
			else if(command == "south"){
				bottom = south; south = top;
				top = north;	north = temp;
			}
			else if(command == "east"){
				bottom = east;	east = top;
				top = west;		west = temp;
			}
			else if(command == "west"){
				bottom = west;	west = top;
				top = east;		east = temp;
			}
		}
		// Output
		cout << top << endl;
	}
}