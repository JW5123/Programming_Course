#include <bits/stdc++.h>
using namespace std;

int main() {
    
    map<string, int> mp;
    
    string s;
    int n;
    while(cin >> n) {
        while (n--) {
            getline(cin, s);
            cin >> s;
            mp[s]++;
        }

        for (auto i: mp) {
            cout << i.first << " " << i.second << "\n";
        }
    }

    return 0;
}