class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty()) return "";
        string res;
        for (string &s: strs)
        {
            res.append(to_string(s.size()));
            res.push_back('#');
            res.append(s);
        }
        // for(auto &ele: res)
        //     cout<<ele;
        
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        while(i<s.size())
        {
            int j=i;
            while(s[j]!='#')
                j++;
            int length=stoi(s.substr(i, j-i));
            i=j+1;
            res.push_back(s.substr(i, length));
            i+=length;
        }
        return res;
    }
};
