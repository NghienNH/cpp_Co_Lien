#include <iostream>
using namespace std;

int main(){
//input
    int n;
//process
    cin >> n;
    bool check = false;
    if(n % 2 == 0){
        check = true;
    }
//output
    if(check){
        cout<<"n is an even number";
    }else cout <<"n is an odd number";
    return 0;
}
