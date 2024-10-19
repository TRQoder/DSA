#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 4, 6, 8, 10};
    vector<int> brr{3, 4, 5, 6};

    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                brr[j] = INT16_MIN;
            }
        }
    }

    // PUSH FROM ARR

    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }

    // PUSH FROM bRR
    for (int i = 0; i < brr.size(); i++)
    {
        if (brr[i] != INT16_MIN)
            ans.push_back(brr[i]);
    }

    for (auto value : ans)
    {
        cout << value << " ";
    }

    return 0;
}
