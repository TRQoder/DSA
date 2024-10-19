#include <iostream>
#include <vector>
using namespace std;

int findUnique(int arr[], int size) {
    int ans = 0; // Initialize the result
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i]; // XOR operation
    }
    return ans; // Return after the loop
}

int main() {
    // Sample array with duplicates
    int arr[] = {1, 2, 3, 2, 1};

    // Call the function to find the unique element
    int uniqueElement = findUnique(arr, 5);
    cout << "Unique element is: " << uniqueElement << endl;

    return 0;
}
