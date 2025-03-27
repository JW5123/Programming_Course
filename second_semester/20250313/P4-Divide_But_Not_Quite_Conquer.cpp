#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    
    while(cin >> n >> m) {
        
        vector<int> arr;
        arr.push_back(n);

        if(n < 2 || m < 2 || n % m != 0) {
            cout << "Boring!\n";
            continue;
        }

        while(n != 1) {
            if(n % m == 0) {
                n /= m;
                arr.push_back(n);
            } else {
                break;
            }
        }

        if(n == 1) {
            for(size_t i = 0; i < arr.size(); i++) {
                if(i != 0) {
                    cout << " ";
                }
                cout << arr[i];
            }
            cout << "\n";
        } else {
            cout << "Boring!\n";
        }
    }

    return 0;
}