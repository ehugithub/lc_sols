class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;

        for(auto &n : nums) {
            if(m.find(n) == m.end()) {
                m[n] = 0;
            }
            else {
                return true;
            }
        }


        return false;
    }
};
