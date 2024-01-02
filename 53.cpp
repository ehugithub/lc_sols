class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = 0;
        int maxsum = INT_MIN;

        for(auto &n : nums) {
            cur += n;
            if(cur > maxsum) {
                maxsum = cur;
            }

            if (cur < 0) {
                cur = 0;
            }
        }

        return maxsum;
    }
};
