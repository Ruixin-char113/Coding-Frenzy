#include <iostream>
#include <iomanip>
using namespace std;

struct point{
	double x;
	double y;
};

int main(){
	double coor[8];
	point inputPoint;
	point f1, f2, s1;
	point repeatPoint;
	
	while(cin >> inputPoint.x >> inputPoint.y){
		f1 = inputPoint;
		
		for(int i = 2; i < 5; i++){
			cin >> inputPoint.x >> inputPoint.y;
			
			// Store directly to f2
			if(i == 2){
				f2 = inputPoint;
			}
			// f1 is the repeated point
			else if(f1.x == inputPoint.x && f1.y == inputPoint.y){
				repeatPoint = inputPoint;
				f1 = f2;
			}
			// f2 is the repeated point
			else if(f2.x == inputPoint.x && f2.y == inputPoint.y){
				repeatPoint = inputPoint;
			}
			// Store directly to s1
			else{
				s1 = inputPoint;
			}
		}
		
		double x = f1.x + s1.x - repeatPoint.x;
		double y = f1.y + s1.y - repeatPoint.y;
		
		cout << fixed << setprecision(3) << x << ' ' << y << endl;
	}
}