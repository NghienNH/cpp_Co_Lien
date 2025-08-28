
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> se;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            se.insert(i);
            se.insert(n/i);
        }
    }
    for(int divisor : se){
        cout << divisor << " ";
    }
    return 0;
}
