class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1, s2;
        unordered_set<int> m1, m2;

        for(auto &n: nums1) {
            s1.insert(n);
        }
        for(auto &n: nums2) {
            s2.insert(n);
        }

        vector<vector<int>> sol(2);

        for(auto &n: nums2) {
            if(s1.find(n) == s1.end()) {
                if(m1.find(n) == m1.end()) {
                    m1.insert(n);
                    sol[1].push_back(n);
                }
            }
        }

        for(auto &n: nums1) {
            if(s2.find(n) == s2.end()) {
                if(m2.find(n) == m2.end()) {
                    m2.insert(n);
                    sol[0].push_back(n);
                }
            }
        }
        
        return sol;
    }
};
