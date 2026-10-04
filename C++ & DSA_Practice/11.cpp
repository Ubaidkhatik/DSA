#include<iostream>
using namespace std;

int findlargest(int a , int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	int a;
	cout<<"Enter first number: ";
	cin>>a;
	int b;
	cout<<"Enter second number: ";
	cin>>b;
cout<<"The largest number is:"<<findlargest(a,b);
	return 0;
}