#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
    unordered_map<int, int> mp;
    stack<int> st;

    for(int i = nums2.size() - 1; i >= 0; i--) {
        while(!st.empty() && nums2[i] >= st.top()) {
            st.pop();
        }
        if(st.empty()) {
            mp[nums2[i]] = -1;
        } else {
            mp[nums2[i]] = st.top();
        }

        st.push(nums2[i]);
    }

    vector<int> res;
    for(int num : nums1) {
        res.push_back(mp[num]);
    }

    return res;
}

int main() {

    vector<int> nums1;
    vector<int> nums2;

    int num;

    while(cin >> num) {
        nums1.push_back(num);
        if(getchar() == '\n') {
            break;
        }
    }

    while(cin >> num) {
        nums2.push_back(num);
        if(getchar() == '\n') {
            break;
        }
    }

    vector<int> res = nextGreaterElement(nums1, nums2);
    int n = res.size();
    for(int i = 0; i < n; i++) {
        if(i == n - 1) {
            cout << res[i];
        } else {
            cout << res[i] << ",";
        }
    }
    cout << "\n";

    return 0;
}