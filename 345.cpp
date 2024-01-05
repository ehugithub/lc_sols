class Solution {

// sol: use a map

public:
    string reverseVowels(string s) {
        map<int, char> m;

        string vowels = "aeiouAEIOU";

        for(auto it = s.begin(); it != s.end(); ++it) {
            if(vowels.find(*it) != vowels.npos) {
                m[it - s.begin()] = *it;
            }
        }

        auto iter = m.begin();

        for(auto it = s.rbegin(); it != s.rend(); ++it) {
            if(vowels.find(*it) != vowels.npos) {
                *it = iter++->second;
            }
        }

        return s;
        
    }
};
