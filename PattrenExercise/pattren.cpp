#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter the number of rows: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    int n;
    int num1 = 0;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0 ; j < n; j++)
        {
            cout << (num1 + 1) << " ";
            num1++;
        }
        cout << endl;
    }
    return 0;
}