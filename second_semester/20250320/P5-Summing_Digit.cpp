#include <bits/stdc++.h>
using namespace std;

int func(int n) {

    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    if(sum <= 9) {
        return sum;
    }
    return func(sum);
}

int main () {
    long long n;
    
    while(cin >> n && n != 0){
        cout << func(n) << "\n";
    }
    return 0;
}