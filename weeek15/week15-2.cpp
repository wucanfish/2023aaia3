#include <iostream>
#include <string>
using namespace std;
int main(){
	string hello;
	int b=1;
	while(cin>>hello){

		if(hello=="#")break;
		cout<<"Case "<<b<<": ";
		if(hello=="HELLO")
			cout<<"ENGLISH"<<endl;
		else if(hello=="HOLA")
			cout<<"SPANISH"<<endl;
		else if(hello=="HALLO")
			cout<<"GERMAN"<<endl;
		else if(hello=="BONJOUR")
			cout<<"FRENCH"<<endl;
		else if(hello=="CIAO")
			cout<<"ITALIAN"<<endl;
		else if(hello=="ZDRAVSTVUJTE")
			cout<<"RUSSIAN"<<endl;
		else
			cout<<"UNKNOWN"<<endl;
		b++;

	}

}
