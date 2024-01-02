// Given a string s, return the length of the longest substring between two equal characters, excluding the two characters. If there is no such substring return -1.
#include <bits/stc++.h>

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int len = -1;
        std::unordered_map<char, int> m;

        for(int i = 0; i < s.length(); ++i) {
            auto it = m.find(s[i]);
            if(it != m.end()) {
                int newLen = i - it->second - 1;
                if (len > newLen) {
                    len = newLen;
                }
            }
            else {
                m[s[i]] = i;
            }
        }
        return len;
    }
};
