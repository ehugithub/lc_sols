bool isAnagram(string s, string t) {
    unordered_map<char, int> hmap;

    for(auto &ch : s) {
        if(hmap.find(ch) == hmap.end()) {
            hmap[ch] = 1;
        }
        else {
            hmap[ch]++;
        }
    }


    for(auto &ch : t) {
        if(hmap.find(ch) == hmap.end()) {
            return false;
        }
        else {
            hmap[ch]--;
        }
    }

    for(auto &[k, v] : hmap) {
        if(v) {
            return false;
        }
    }

    return true;
}
