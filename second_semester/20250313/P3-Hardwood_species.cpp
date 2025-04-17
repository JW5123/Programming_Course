#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    getchar();
    getchar();
    while(n--) {
        string s;
        map<string, int> mp;

        int total = 0;
        while(getline(cin, s) && s != "") {
            mp[s]++;
            total++;
        }

        for(auto it = mp.begin(); it != mp.end(); it++) {
            cout << it->first << " " << fixed << setprecision(4) << (double)it->second / total * 100 << "\n";
        }
        cout << "\n";
    }

    return 0;
}