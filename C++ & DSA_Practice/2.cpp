#include<iostream>
using namespace std;
int main(){
	cout<<"Enter the number: ";
	int a ; 
	cin>>a;
	if(a%2==0){
		cout<<"The number is even: "<<a;
		
	}
	else{
		cout<<"The number is odd: "<<a;
	}
	return 0;
}