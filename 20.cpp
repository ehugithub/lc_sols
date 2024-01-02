
#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<int> st;

    for(auto &c : s) {
        if (c == ')' or c == '}' or c == ']') {
            if(st.empty()) {
                return false;
            }
            switch (c) {
            case ')':
                if(st.top() == '(') {
                    st.pop();
                    break;
                }
                else {
                    return false;
                }
            case '}':
                if(st.top() == '{') {
                    st.pop();
                    break;
                }
                else {
                    return false;
                }
            case ']':
                if(st.top() == '[') {
                    st.pop();
                    break;
                }
                else {
                    return false;
                }
            }
        }
        else {
            st.push(c);
        }
    }
    return st.empty();
}


int main() {
    string s = "()";
    bool expected = true;
    cout << (isValid(s) ? "true" : "false") << endl;

    return 0;
}
