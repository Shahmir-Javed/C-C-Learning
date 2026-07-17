#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move start and end indices towards the center
        start++;
        end--;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}