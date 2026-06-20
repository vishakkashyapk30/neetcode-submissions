class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> hash_s;
        unordered_map<char, int> hash_t;

        for (char c : s)
            hash_s[c]++;

        for (char c : t)
            hash_t[c]++;

        return hash_s == hash_t;
    }
};