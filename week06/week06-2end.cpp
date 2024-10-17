//c
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> a;//S3

	int now;
	while(cin>>now){//S1
		a.push_back(now);//S3

		sort(a.begin(),a.end());//S5

		int N=a.size();//S6
		if(N%2==1)	cout << a[N/2]<<"\n";
		else cout << (a[N/2-1]+a[N/2])/2<<"\n";
		//for(int b : a) cout << b <<' ';
	    //cout << "\n";
		//cout << now << "\n";
	}


}
