#include <bits/stdc++.h>
using namespace std;
// solution: use hashmap, O(n) time, O(n) space

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> res;
        res.emplace_back();

        int max = 1;

        unordered_map<int, int> map;

        for(auto &n: nums) {

            if(map.find(n) == map.end()) {
                map[n] = 0;

                res[0].push_back(n);
            }
            else {
                ++map[n];
                if(map[n] >= max) {
                    res.emplace_back();
                    max++;
                }

                res[map[n]].push_back(n);
            }

        }

        return res;
    }
};

int main() {
    vector<int> input{1, 3, 4, 1, 2, 3, 1};

    Solution sol;

    auto solu = sol.findMatrix(input);


    return 0;
}
