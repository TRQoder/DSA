#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of Element in array :"<<endl;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key : "<<endl;
    cin>>key;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>key) count++;
    }
    
    cout<<count;
}