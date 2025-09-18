#include<bits/stdc++.h>

using namespace std;

void testcase(){
    string s;
    getline(cin, s);

    stringstream ss(s);

    string tmp;
    
    map<string,int> mp;
    while(ss >> tmp){
        mp[tmp]++;
    }
    for(auto x : mp){
        if(x.second != 0){
            cout << x.first << "->" << x.second;
        }
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