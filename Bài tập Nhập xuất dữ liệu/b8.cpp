#include <iostream>
using namespace std;

int main() {
    char ch;
    
    // input
    cout << "Nhap mot ky tu: ";
    cin >> ch;
    
    // process
    char nextChar = ch + 1;
    
    // output
    cout << "\nKy tu ban dau: " << ch << endl;
    cout << "Ky tu tiep theo: " << nextChar << endl;
    
    return 0;
}
