class Solution {

// solution: use a stack

public:
    string reverseWords(string s) {
        string res;
        stack<string> st;

        string word;

        int index1 = -1;

        for(auto it = s.begin(); ; ++it) {
            if(it == s.end()) {
                if(!isspace(*(it - 1))) {
                    st.push(s.substr(index1, it - s.begin()));
                }
                break;
            }
            if(isspace(*it)) {
                if(index1 == -1) {
                    continue;
                }
                else {
                    st.push(s.substr(index1, it - s.begin() - index1));
                    index1 = -1;
                }
            }
            else {
                if(index1 == -1) {
                    index1 = it - s.begin();
                }
                else {
                    continue;
                }
            }
        }

        while(!st.empty()) {
            res += st.top();
            if(st.size() != 1) {
                res += ' ';
            }
            st.pop();
        }

        return res;
        
    }
};
