#include <iostream>
using namespace std;

int main() {
    //input
    float r;
    const float pi = 3.14;
    cout << "Nhap ban kinh r: ";
    cin >> r;
    
    // process
    float circumference = 2 * pi * r;
    
    //output
    cout << "\nCircumference = " << circumference << endl;
    
    return 0;
}
