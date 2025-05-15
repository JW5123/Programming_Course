#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int T, M, N, Q, r, c;

    string s;
    cin >> T;
    while(T--) {
        cin >> M >> N >> Q;
        
        char arr[M][N];
        for(int i = 0; i < M; i++) {
            cin >> s;
            for(int j = 0; j < N; j++) {
                arr[i][j] = s[j];
            }
        }
        
        cout << M << " " << N << " " << Q << "\n";
        while(Q--) {
            cin >> r >> c;
            int count = 1;
            bool flag = true;
            while(flag) {
                for(int i = r - count; i <= r + count; i++) {
                    for(int j = c - count; j <= c + count; j++) {
                        if(r - count >= 0 && r + count < M && c - count >= 0 && c + count < N) {
                            if(arr[i][j] != arr[r][c]) {
                                flag = false;
                                break;
                            }
                        } else {
                            flag = false;
                            break;
                        }
                    }
                }
                if(flag) {
                    count++;
                }
            }
            cout << 1 + (count - 1) * 2 << "\n";
        }
    }

    return 0;
}