#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the employee id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
};

int Employee :: count = 0;
int main()
{
    Employee harry, rohan, lovish;
    harry.setData();
    harry.getData();

    rohan.setData();
    rohan.getData();

    lovish.setData();
    lovish.getData();
    return 0;
}