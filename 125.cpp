bool isPalindrome(string s) {
    int i = 0;

    while(i <= s.length() && !isalnum(s[i])) {
        i++;
    }



    for(int j = s.length() - 1; j >= 0; --j) {
        if(!isalnum(s[j])) {
            continue;
        }

        // cout << s[i] << endl << s[j];

        if(tolower(s[j]) != tolower(s[i])) {
            return false;
        }

        do {
            i++;
        } while(i <= s.length() && !isalnum(s[i]));

    }

    return true;

}
