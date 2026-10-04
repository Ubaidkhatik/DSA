#include<iostream>
using namespace std ; 
int main(){
	int n ;
	cin>>n;
	int largest = 0;
	

	for ( int i = 1; i<n; i++){
		if(i%3==0){
			largest=i;
		}
}
cout<<largest;
return 0;
}