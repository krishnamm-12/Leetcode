class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int mx = INT_MIN, mn = INT_MAX, idx = INT_MAX;
        while (i < n) {
            mx = max(nums[i], mx);
            for (int j = i; j < n; j++) {
                mn = min(mn, nums[j]);
            }

            int instability_score = mx - mn;
            if (instability_score <= k) {
                idx = min(idx, i);
            }
            mn = INT_MAX;
            i++;
        }
        if (idx == INT_MAX)
            return -1;
        return idx;
    }
};