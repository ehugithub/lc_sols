#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hashmap;
    vector<int> res;
    for(int i = 0; i < nums.size(); ++i) {
        if(hashmap.find(target - nums[i]) != hashmap.end()) {
            res.push_back(hashmap[target - nums[i]]);
            res.push_back(i);
        }
        else {
            hashmap[nums[i]] = i;
        }
    }
    return res;
}

int main() {
    return 0;
}
