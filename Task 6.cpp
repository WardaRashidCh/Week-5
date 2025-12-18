#include<iostream>
using namespace std;
int main(){
	int balance,withdraw;
	cout<<"Enter your account balance:";
	cin>>balance;
	if(withdraw <= balance){
		balance -= withdraw;
		cout<<"withdrawal successful! ramaining balance:"<<balance;
	}
	else{
		cout<<"insufficient balance";
	}
	return 0;
}