#include <stdio.h>
int main(){
	int n,c=0;
	int a[10];
	while(scanf("%d",&n)&&n!=0){
		a[c++]=n;
	}
	int k,m=0;
	scanf("%d",&k);
	for(int i=0;i<=c;i++){
		if(a[i]==k)    m++;
	}
	printf("%d\n",m);
}
