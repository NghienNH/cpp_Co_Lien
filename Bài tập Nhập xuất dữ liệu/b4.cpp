#include <iostream>
using namespace std;

int main() {
    int length, width;
    
    // input
    cout << "Nhap chieu dai: ";
    cin >> length;
    
    
    cout << "Nhap chieu rong: ";
    cin >> width;
    
    // process
    int area = length * width;
    
    // output
    cout << "\nArea = " << area << endl;
    
    return 0;
}
