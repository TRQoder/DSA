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
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key) flag=true;
    }
    
    flag?cout<<"Element present"<<endl:cout<<"Element not present"<<endl;
}