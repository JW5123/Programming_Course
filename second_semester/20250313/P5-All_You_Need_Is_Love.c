#include <bits/stdc++.h>
using namespace std;

int main() {
    map <string, int> mp;
    
    int t;
    cin >> t;
    
    string s;
    getline(cin, s);
    getline(cin, s);
    while (t--){
        int sum = 0;
        while (getline(cin, s)){
            mp[s]++;
            sum++;
        }
        for (auto i: mp){
            cout << i.first << " " << fixed << setprecision(4) << (double)i.second / sum * 100 << "\n";
        }
        cout << "\n";
    }
    return 0;
}