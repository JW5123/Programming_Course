#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    while(cin >> n) {
        
        string s;
        long long a;
        getline(cin, s);
        vector<long long> func;
        while(cin >> a && getchar() == ' ') {
            func.push_back(a);
        }

        reverse(func.begin(), func.end());
        long long temp = 1;
        long long res = 0;
        for(size_t i = 0; i < func.size(); i++) {
            res += func[i] * (i + 1) * temp;
            temp *= n;
        }

        cout << res << "\n";
        func.clear();
    }

    return 0;
}