#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    // input
    cout << "Nhap gia tri a: ";
    cin >> a;
    
    
    cout << "Nhap gia tri b: ";
    cin >> b;
    
    // output1
    cout << "\nTruoc khi hoan doi: a = " << a << ", b = " << b << endl;
    
    // process
    int temp = a;
    a = b;
    b = temp;
    
    // output2
    cout << "After swapping, a = " << a << ", b = " << b << endl;
    
    return 0;
}
