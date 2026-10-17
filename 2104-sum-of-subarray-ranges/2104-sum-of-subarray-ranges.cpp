class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();

        vector<int> left(n), right(n);
        stack<int> st;

        // previous smaller
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] > nums[i]) {
                st.pop();
            }

            if (st.empty()) {
                left[i] = i + 1;
            } else {
                left[i] = i - st.top();
            }

            st.push(i);
        }

        while (!st.empty()) {
            st.pop();
        }

        // next smaller
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }

            if (st.empty()) {
                right[i] = n - i;
            } else {
                right[i] = st.top() - i;
            }

            st.push(i);
        }

        long long sumMin = 0;

        for (int i = 0; i < n; i++) {
            sumMin += 1LL * nums[i] * left[i] * right[i];
        }

        // Sum of maximums
        while (!st.empty()) {
            st.pop();
        }

        // previous greater
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] < nums[i]) {
                st.pop();
            }

            if (st.empty()) {
                left[i] = i + 1;
            } else {
                left[i] = i - st.top();
            }

            st.push(i);
        }

        while (!st.empty()) {
            st.pop();
        }

        // next greater
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }

            if (st.empty()) {
                right[i] = n - i;
            } else {
                right[i] = st.top() - i;
            }

            st.push(i);
        }

        long long sumMax = 0;

        for (int i = 0; i < n; i++) {
            sumMax += 1LL * nums[i] * left[i] * right[i];
        }

        return sumMax - sumMin;
    }
};