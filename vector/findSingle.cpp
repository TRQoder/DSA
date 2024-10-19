//Note : To find unique use xor (^).
     // for last bit (binary)&1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int findUnique (vector<int> arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans ^ arr[i];
    }
    // for(int i: arr){
    //     ans = ans ^ i;
    // }
        return ans;
}

int main()
{

    int n;
    cout<<"Enter the size of array ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements :";
    for(int i=0; i<arr.size();i++){
        cin >> arr[i];
    }

    int unique = findUnique(arr);
    cout<<"unique :"<<unique;
 
}



