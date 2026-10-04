#include<iostream>
using namespace std;

	int sumTon(int n){
		int sum = 0;
		for(int i = 1; i<=n; i++){
			sum = sum+i;
		
	}
		return sum;
}
	
	int main(){
		int n;
		cout<<"Enter the number: ";
		cin>>n;
	cout<<"The sum is: "<<sumTon(n);
return 0;
	}
