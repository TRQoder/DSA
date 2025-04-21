#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter the size of array : ";
    // cin>>n;
    // int arr[n];
    // //elements
    // cout<<"Enter the elements :"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    // //max
    // int max = arr[0];
    // for (int i = 1; i < n; i++)
    // {
    //     if (arr[i]>max) max=arr[i];
        
    // }

    // //second max
    // int smax = INT16_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]!=max && arr[i]>smax) smax=arr[i];
        
    // }

    // cout<<"Second Maximum Element : "<< smax;










    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    //elements
    cout<<"Enter the elements :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //max
    int max = INT16_MIN;
    int smax = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max){
            smax = max;
            max=arr[i];
        }
            
        
    }
    cout<<smax;
    
}