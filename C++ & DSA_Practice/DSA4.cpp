#include<iostream>
using namespace std;
int findSmallest(int arr[], int size)
{
	int smallest = arr[0];
	for(int i = 0; i<size; i++){
	if(arr[i]<smallest)	{
		smallest = arr[i];
	}
	}
	return smallest;
}
int main(){
	int arr[] = {12, 5, 18, 3, 25, 9};
	cout<<"The smallest element is: "<<findSmallest(arr,6);
	return 0;
}