#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // 1. Create an ofstream object and open the file
    ofstream outFile("Mydata_cpp.txt");

    // Check if the file opened successfully
    if (!outFile.is_open()) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    // 2. Write to the file using the insertion operator (<<)
    outFile << "Hello, File Handling in C++!" << endl;
    outFile << "Streams make this very intuitive." << endl;
    outFile << "Hi! My name is Shahmir." << endl;
    outFile << "Hi! My name is Shahmir." << endl;

    // 3. Close the file
    outFile.close();

    // --- READING THE FILE ---
    ifstream inFile("data_cpp.txt");
    string line;

    if (inFile.is_open()) {
        cout << "Reading from file:" << endl;
        // Read line by line using getline
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }

    return 0;
}