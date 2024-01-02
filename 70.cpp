class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int, int> m;
        m[1] = 1;
        m[2] = 2;
        int total = 0;
        int f = 1;

        while(f < n + 1) {
            if(m.find(f) == m.end()) {
                m[f] = m[f - 1] + m[f - 2];
            }
            f++;

        }

        return m[f - 1];
    }
};
