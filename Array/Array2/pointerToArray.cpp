#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    //giving pointer the address of array or first element of array
    // by arr, &arr[0]
    int* ptr = arr; //also int* ptr = &arr[0]

    ptr[0]=8; //also update using pointer

    //ways to access array;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<ptr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<*ptr;
        ptr++;
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<i[arr];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<i[ptr];
    }
    
}