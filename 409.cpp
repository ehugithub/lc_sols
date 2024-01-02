class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;

        for(auto &c : s) {
            if(m.find(c) == m.end()) {
                m[c] = 1;
            }
            else {
                m[c]++;
            }
        }

        multiset<int> se;

        for(auto & p : m) {
            se.insert(p.second);
        }

        int total = 0;
        bool odd = false;

        for(auto it = se.rbegin(); it != se.rend(); ++it) {
            if(*it % 2 == 0) {
                total += *it;
            }
            else {
                if(!odd) {
                    total += *it;
                    odd = true;
                }
                else {
                    total += *it - 1;
                }
            }
        }

        for(auto &p : m) {
            cout << p.first << " " << p.second << endl;
        }

        return total;
    }
};
