#include <bits/stdc++.h>

using namespace std;

void testcase(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        tmp[0] = toupper(tmp[0]);
        for(int i = 1; i < tmp.length(); i++){
            tmp[i] = tolower(tmp[i]);
        }
        cout << tmp << " ";
    }
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        testcase();
        cout << endl;
    }
    return 0;
}