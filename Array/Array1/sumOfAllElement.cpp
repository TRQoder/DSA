#include<iostream>
using namespace std;

int main(){
    // int arr[]={1,2,3,4,5};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // int sum=0;
    // for(int i=0;i<size;i++){
    //     sum += arr[i];
    // }

    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int arr[n];
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    cout<<"Enter Elements ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
       sum += arr[i];
    }



    cout<<"Sum : "<<sum<<endl;
}