#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,3};
    int sizea = 8;
    int brr[]={3,4,9,3,10};
    int sizeb = 4;

    vector<int> ans;
        for(int i=0; i<sizea;i++){
            for(int j=0; j<sizeb; j++){
                if(arr[i]==brr[j]){
                    //mark
                    brr[j]=INT_MIN;
                    ans.push_back(arr[i]);
                    // break;
                }
            }
        }

    //print

    for (auto value: ans){
        cout<<value<<" ";
    }
    
    

     return 0;
}
