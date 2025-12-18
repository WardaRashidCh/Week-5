#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout <<"enter three number:";
	cin>>a>>b>>c;
	if(a>b && a>c)
	cout<<"largest ="<<a;
	if(b>a && b>c)
	cout<<"largest ="<<b;
	if(c>a && c>b)
	cout<<"largest ="<<c;
	return 0;
}