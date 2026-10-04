#include<iostream>
using namespace std; 
int countOdd(int arr[], int size){
	int count = 0;
	for(int i = 0; i<size; i++){
		if(arr[i]%2!=0){
			count++;
		}
	}
	return count;
}
int main(){
	int arr[] = {10, 25, 8, 40, 15, 30, 7};
	cout<<"The odd count is: "<<countOdd(arr, 7);
	return 0;
}