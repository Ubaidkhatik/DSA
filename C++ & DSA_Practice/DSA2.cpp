#include<iostream>
using namespace std;
int sumArray(int arr[], int size){
	int sum = 0;
	for ( int i=0; i<size; i++){
		sum = sum+arr[i];
	}
	return sum ;
}
int main(){
	int arr[] = {10, 20, 5, 15, 30};
	cout<<"The sum of the Array is : "<<sumArray(arr, 5);
	return 0;
}