#include<iostream>
#include<vector>
using namespace std;    

int main() {
    // write  All all of these  Vector functions size ,push_back, pop_back, front, back, at

    // 1: Size of vector
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "Size of vector: " << v.size() << endl;

    // 2: push_back
    v.push_back(6);
    cout << "Size of vector: " << v.size() << endl;

    // 3: pop_back 
    v.pop_back();
    cout << "Size of vector: " << v.size() << endl;

    // 4: front
    cout << "Front element: " << v.front() << endl;
    
    // 5: back
    cout << "Back element: " << v.back() << endl;

    // 6: at
    cout << "Element at index 2: " << v.at(2) << endl;


   


    return 0;

}
