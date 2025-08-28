#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, address;
    
    // input
    cout << "Nhap ten: ";
    getline(cin, name);
    cout << "Nhap dia chi: ";
    getline(cin, address);
    
    // output
    cout << "\nName: " << name << endl;
    cout << "Address: " << address << endl;
    
    return 0;
}
