#include<iostream>
using namespace std; 

int findLargest(int arr[], int size){
	int largest = arr[0];
	for(int i = 1; i<size; i++){
		if(arr[i]>largest ){
			largest = arr[i];
		}
}
return largest;
}
int main(){
int arr[] = {10, 25, 7, 40, 15};
cout<<"The Largest is : "<<findLargest(arr,5);
return 0;	
}