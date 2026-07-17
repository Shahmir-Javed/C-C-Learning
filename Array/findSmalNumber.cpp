#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[5] = {12, 20, 5, 40, -30};
    int smallest = INT_MAX; // Initialize to maximum integer value

    for (int i = 0; i < 5; i++)
    {
        smallest = min(smallest, arr[i]); // Update smallest if current element is smaller
    }

    cout << "The smallest number in the array is: " << smallest << endl;
    return 0;
}