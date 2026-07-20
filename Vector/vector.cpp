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

    // 7: empty
    if (v.empty()) {
        cout << "Vector is empty" << endl;
    }
    else {
        cout << "Vector is not empty" << endl;
    }

    // 8: Vector Capacity
    cout << "Capacity of vector: " << v.capacity() << endl;


    // 9: Exercise: find the Unique elements in the vector and store them in another vector
    
    vector<int> v2= {1,2,2,3,3};
    int n = 0;
    for(int i=0;i<v2.size();i++){
        n = n ^ v2[i];
    }
    cout << "Unique element: " << n << endl;
    return 0;

}
