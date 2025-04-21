#include <iostream>
using namespace std;

int main()
{
    int marks[6] = {90, 45, 23, 89, 27, 99};
    for (int i = 0; i < 6; i++)
    {
        if (marks[i] < 30)
        {
            cout << i << endl;
        }
    }

    
    int markss[] = {90, 45, 23, 89, 27, 99,12,85,31,34,100}; 
    int size = sizeof(markss)/sizeof(markss[0]);
    for (int i = 0; i < size; i++)
    {
        if (marks[i] < 35)
        {
            cout << i << " ";
        }
    }
}