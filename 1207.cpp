// O(n) time O(n) space
// hm count occurences, set to test uniqueness

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;

        for(auto &n: arr) {
            if(m.find(n) == m.end()) {
                m[n] = 1;
            }
            else {
                ++m[n];
            }
        }

        unordered_set<int> s;

        for(auto &p: m) {
            cout << p.first << " " << p.second << endl;
            if(s.find(p.second) == s.end()) {
                s.insert(p.second);
            }
            else {
                return false;
            }
        }

        return true;
        
    }
};
