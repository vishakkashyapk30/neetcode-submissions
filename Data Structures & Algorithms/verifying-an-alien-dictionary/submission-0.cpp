class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char, int> hashmap;
        int i = 0;
        for (char c : order)
            hashmap[c] = i++;

        for (int i = 0; i < words.size() - 1; i++) {
            string a = words[i];
            string b = words[i + 1];

            int j = 0;
            while (j < a.size() && j < b.size() && a[j] == b[j])
                j++;

            if (j == b.size() && a.size() > b.size())
                return false;

            if (j < a.size() && j < b.size()) {
                if (hashmap[a[j]] > hashmap[b[j]])
                    return false;
            }
        }

        return true;
    }
};