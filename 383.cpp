class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map;

        for(auto &c : magazine) {
            if(map.find(c) == map.end()) {
                map[c] = 1;
            }
            else {
                map[c]++;
            }
        }

        for(auto &c : ransomNote) {
            if(map.find(c) == map.end()) {
                return false;
            }
            else if(map[c] == 0) {
                return false;
            }
            else {
                map[c]--;
            }
        }

        return true;
    }
};
