#include<iostream>
using namespace std;
int countGreaterThan20(int arr[], int size){
	int count = 0;
	for(int i = 0; i<size; i++){
		if(arr[i]>20){
			count++;
		}
	}
	return count;
}
int main(){
	int arr[] = {10, 25, 8, 40, 15, 30};
	cout<<"The count is: "<<countGreaterThan20(arr,6);
	return 0;
}