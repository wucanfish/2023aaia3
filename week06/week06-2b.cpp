//b
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> a;
	int now;
	while(cin>>now){
		a.push_back(now);//vector arry
		for(int b : a) cout << b <<' ';
		cout << "\n";
		//cout << now << "\n";
	}


}
