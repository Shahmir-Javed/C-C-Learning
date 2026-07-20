#include <iostream>
using namespace std;

int main()
{
    // int n = 5;
    // int arr[5] = {1, 2, 3, 4, 5};

    // for (int st = 0; st < n; st++)
    // {
    //     for (int en = st; en < n; en++)
    //     {
    //         for (int i = st; i <= en; i++)
    //         {
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }


    // Brute Force Approach to find the maximum contiguous sum in an array
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxSum = 0; // Initialize maxSum to the smallest possible integer

    for (int st = 0; st < n; st++)
    {
        int currentSum = 0; // Initialize currentSum for each starting index
        for (int en = st; en < n; en++)
        {
            currentSum += arr[en];  // Add the current element to currentSum
            maxSum = max(maxSum, currentSum); // Update maxSum if currentSum is greater
            cout << currentSum << "  ";
        }
    }

    cout << "Maximum contiguous sum: " << maxSum << endl;
    return 0;
}
