#include <bits/stdc++.h>
using namespace std;

int main() {
    map <char, vector<int>> mp;
    mp['c'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1};
    mp['d'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    mp['e'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    mp['f'] = {0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    mp['g'] = {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    mp['a'] = {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['b'] = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    mp['C'] = {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['D'] = {0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    mp['E'] = {0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    mp['F'] = {0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    mp['G'] = {0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    mp['A'] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['B'] = {0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};

    int t;
    string s;
    cin >> t;

    getchar();
    while (t--){
        getline(cin, s);

        int cnt[11] = {0};
        int flag[11] = {0};

        for (int i = 0; i < s.size(); i++){
            for (int j = 1; j <= 10; j++){
                if (mp[s[i]][j]){
                    if (flag[j]) 
                        continue;
                    else {
                        flag[j] = 1;
                        cnt[j]++;
                    }
                } else {
                    flag[j] = 0;
                }
            }
        }
        for (int i = 1; i <= 10; i++){
            if(i != 1) 
                cout << " ";
            cout << cnt[i];
        }
        cout << "\n";
    }
    return 0;
}