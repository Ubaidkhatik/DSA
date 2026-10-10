#include<iostream>
using namespace std;
int findSecondSmallest(int arr[], int size){
	int smallest = arr[0];
	int secondSmallest = 1;
	for( int i = 0; i<size; i++){
		if(arr[i]<smallest ){
	
		secondSmallest = smallest;
		smallest = arr[i];
			}
			else if ( arr[i] < smallest && arr[i] < secondSmallest){
				secondSmallest = arr[i];
			}
	}
	if(secondSmallest == -1){
		return -1;
	}
	else{
		return secondSmallest;
	}
}
int main(){
	int arr[] = {12, 5, 18, 3, 25, 9};
	cout<<"Second Smallest :"
	<<findSecondSmallest(arr, 6);
	return 0;
}