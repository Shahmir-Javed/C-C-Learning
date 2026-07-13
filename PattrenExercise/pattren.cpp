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



    // int n;
    // int num1 = 0;
    // cout << "Enter the number of rows: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0 ; j < n; j++)
    //     {
    //         cout << (num1 + 1) << " ";
    //         num1++;
    //     }
    //     cout << endl;
    // }


// pattren  pascal triangle
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        // space :n-i-1
        for (int j = 0 ; j < n-i-1; j++)
        {
            cout<< " ";
        }

        // num1: i+1
        for (int k = 1; k <= i+1; k++)
        {   
            cout << k;
        }

        // num2: i
        for (int l = i; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
    }
    return 0;
}