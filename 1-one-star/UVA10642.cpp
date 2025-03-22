#include <iostream>
using namespace std;

int distance(const int x, const int y){
	int level = x + y;
	
	// Return the distance from (x, y) to (0, 0)
	return (1 + level) * level / 2 + x;
}

int main(){
	// Number of Test case
	int n;
	cin >> n;
	
	int countN = 0;
	while(n--){
		countN++;
		int src_x, src_y, dest_x, dest_y;
		
		cin >> src_x >> src_y >> dest_x >> dest_y;
		
		// Output
		cout << "Case " << countN << ": " << 
		distance(dest_x, dest_y) - distance(src_x, src_y) << endl;
	}
}