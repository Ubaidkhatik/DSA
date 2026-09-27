#include <iostream>
using namespace std;
int main(){
    int arr[5];
    std::cout<<"Enter 5 numbers: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"you entered: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    std::cout<<endl;
    return 0;
}