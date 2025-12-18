#include<iostream>
using namespace std;
int main(){
	int salary,exp;
	cout<<"enter salary";
	cin>>salary;
	cout<<"enter yours of experience";
	cin>>exp;
	if(salary >= 25000)
	cout<<"Eligible for loan";
	else if(exp > 5 && salary >=20000)
	cout<<"Eligible for loan";
	else
	cout<<"Not eligible";
	return 0;	
}