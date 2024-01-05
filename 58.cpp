class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());

        int count = 0;

        for(auto it = s.begin(); it != s.end(); ++it) {
            if(!isspace(*it)) {
                count++;
            }
            else if(isspace(*it)) {
                if(count != 0) {
                    break;
                }
            }
        }

        return count;
        
    }
};
