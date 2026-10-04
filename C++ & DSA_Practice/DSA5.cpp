#include<iostream>
using namespace std;
double findAverage(int arr[], int size){
	double sum = 0;
	
	for(int i = 0; i<size; i++){
		sum= sum+arr[i];
	}
	double average = sum /size;
	return average;
}
int main(){
	int arr[] = {10, 20, 30, 40, 50};
	cout<<"The average is: "<<findAverage(arr, 5);
	return 0;
}