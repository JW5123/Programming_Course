#include <bits/stdc++.h>
using namespace std;

vector<int> slidingWindow(vector<int> &nums, int k, bool flag) {
    deque<int> dq;
    vector<int> res;

    for(int i = 0; i < nums.size(); i++) {
        while(!dq.empty() && (flag ? dq.back() < nums[i] : dq.back() > nums[i])) {
            dq.pop_back();
        } 

        dq.push_back(nums[i]);
        if(i >= k && dq.front() == nums[i - k]) {
            dq.pop_front();
        }
        if(i >= k - 1) {
            res.push_back(dq.front());
        }
    }
    return res;
}

int main() {

    int n, k;
    vector<int> nums;
    while(cin >> n >> k) {
        nums.clear();
        int x;
        while(cin >> x) {
            nums.push_back(x);
            if(getchar() == '\n') {
                break;
            }
        }
        vector<int> minNums = slidingWindow(nums, k, false);
        for(size_t i = 0; i < minNums.size(); i++) {
            if(i == minNums.size() - 1) {
                cout << minNums[i];
            } else {
                cout << minNums[i] << " ";
            }
        }
        cout << "\n";

        vector<int> maxNums = slidingWindow(nums, k, true);
        for(size_t i = 0; i < maxNums.size(); i++) {
            if(i == maxNums.size() - 1) {
                cout << maxNums[i];
            } else {
                cout <<maxNums[i] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}