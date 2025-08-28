#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    
    // input
    cout << "Nhap ten: ";
    getline(cin, name);
    
    cout << "Nhap tuoi: ";
    cin >> age;
    
    // process
    int ageAfter15Years = age + 15;
    
    // output
    cout << "\nIn 15 years, age of " << name << " will be " << ageAfter15Years << endl;
    
    return 0;
}
