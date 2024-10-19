#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> arr{10, 20, 30, 40, 60, 70, 6, 8, 3, 5, 7, 90, 4, 32, 6, 33, 3, 0, 8};
    int sum = 60;
    cout << "Triplets having sum :" << sum << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        int element1 = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            int element2 = arr[j];
            for (int k = j + 1; k < arr.size(); k++)
            {
                int element3 = arr[k];
                if (element1 + element2 + element3 == sum)
                {
                    cout << "(" << element1 << "," << element2 << "," << element3 << ")" << endl;
                }
            }
        }
    }

    return 0;
}
