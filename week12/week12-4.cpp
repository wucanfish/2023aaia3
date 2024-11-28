#include <iostream>
using namespace std;
int a[100][100];//ST3
int main(){

	int T,N;
	cin>>T;//ST1
	for(int t=1;t<=T;t++){
		char c,c2;
		cin >> c >> c2 >>N;//ST1
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				cin>>a[i][j];//ST3
			}
		}
		cout<<"Test #"<<t<< ": Symmetric.\n";//ST2
	}
}
