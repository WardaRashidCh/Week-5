#include<iostream>
using namespace std;
int main(){
	char signal;
	cout<<"Enter signal color(R,G,Y):";
	cin>>signal;
	if(signal =='R'|| signal =='r')
	cout << "Stop";
	if(signal =='G' || signal =='g')
	cout << "Go";
	if(signal =='Y' || signal =='y')
	cout << "Slow Down";
	return 0;
}