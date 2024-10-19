#include <iostream>
using namespace std;
int main()
{
    // int arr[]={2,4,6,8,12};
    // char a[1060];
    // bool ar[23];
    // int n;
    // cout<<"enter";
    // cin>>n;
    // int arrr[n]={2,3,4,5};
    // cout << arr[2]<<endl;
    // cout << arrr[3];

    int arr[4];

    for(int i=0; i<4; i++){
    cout<<"Enter element "<<i<<endl;
    cin>>arr[i];
    }

    for(int i=0; i<4; i++){
    cout<<"Element at "<<i<<" is ";
    cout<<arr[i];
    cout<<endl;
    }


     return 0;
}
