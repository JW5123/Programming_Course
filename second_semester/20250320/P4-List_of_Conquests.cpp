#include <bits/stdc++.h>
using namespace std;

int main() {
    
    map<string, int> mp;
    
    string s;
    int n;
    while(cin >> n) {
        while (n--) {
            cin >> s;
            mp[s]++;
            getline(cin, s);
        }

        for (auto i: mp) {
            cout << i.first << " " << i.second << "\n";
        }
    }

    return 0;
}