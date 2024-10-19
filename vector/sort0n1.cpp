#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr{0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1};

    int start = 0;
    int end = arr.size() - 1;

    int i = 0;

    while (i != end)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            i++;
            start++;
        }
        else if (arr[i] == 1)
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }

    // print
    for (auto value : arr)
    {
        cout << value << " ";
    }

    return 0;
}
