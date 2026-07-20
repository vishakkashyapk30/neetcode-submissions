class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> hash;
        vector<vector<int>> freq(nums.size()+1);

        for(int n:nums)
            hash[n]++;

        for(auto &ele: hash)
            freq[ele.second].push_back(ele.first);
        
        vector<int> ans;
        for(auto i=freq.size()-1; i>0; i--)
        {
            for(auto j=0; j<freq[i].size(); j++)
            {
                ans.push_back(freq[i][j]);
                if(ans.size()==k)
                    return ans;
            }
        }
        return ans;
    }
};
