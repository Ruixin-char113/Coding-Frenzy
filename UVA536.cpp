#include <iostream>
#include <string>
using namespace std;
char ans[26] = { ' ' };
int ansI = 0;

void Postorder(string Pre, string In){
	int Location = In.find(Pre[0]);
	
	if(Pre.length()==1 || Pre.length()==0){
		ans[ansI] = (char)Pre[0];	ansI++;	return;
	}
										                            //left
	string leftPre, leftIn;
		for(int i=1; i<=Location; i++){
			leftPre += Pre[i];
		}
		for(int i=0; i<Location; i++){
			leftIn += In[i];
		}
	if(Pre.length()>=1)
		Postorder(leftPre, leftIn);
										                            //right
	string rightPre, rightIn;
		for(int i=1+Location; i<Pre.length(); i++){
			rightPre += Pre[i];
		}
		for(int i=1+Location; i<In.length(); i++){
			rightIn += In[i];
		}
	if(Pre.length()>=1)
		Postorder(rightPre, rightIn);
	ans[ansI] = (char)Pre[0];	ansI++;
}

int main(){
	string Preorder, Inorder;
	
	while(cin >> Preorder >> Inorder){
		Postorder(Preorder, Inorder);
		for(int i=0;i<=ansI;i++)
			if(ans[i])                              //filter '\0'
				cout << ans[i];
		cout << endl;
		ansI = 0;
	}
}
