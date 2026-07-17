#include <iostream>
#include <climits>
using namespace std;


// Linear search algorithm to find the target number in the array
int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main()
{
    int arr[5] = {12, 20, 5, 40, -30};
    int target = 40; // Example target number
    cout << "The index of " << target << " is: " << linearSearch(arr, 5, target) << endl;

    return 0;
}

