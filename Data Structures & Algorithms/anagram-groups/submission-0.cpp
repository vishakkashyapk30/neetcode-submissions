class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int length_str_arr = strs.size();
        map<string, vector<string>> hashmap;
        for(auto word: strs)
        {
            vector<int> freq(26,0);
            for(auto ch: word)
                freq[int(ch - 'a')]++;
            string key="";
            for(auto f: freq)
                key+=to_string(f)+"#";
            hashmap[key].push_back(word);
        }
        vector<vector<string>> result;
        for(auto &p: hashmap)
            result.push_back(p.second);
        return result;
    }
};
