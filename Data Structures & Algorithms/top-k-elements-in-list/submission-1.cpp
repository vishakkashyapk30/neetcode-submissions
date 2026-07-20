class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hist;
        for(auto n: nums)
            hist[n]++;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minheap;
        for(auto &entry: hist)
        {
            minheap.push({entry.second, entry.first});
            if(minheap.size()>k)
                minheap.pop();
        }

        vector<int> ans;
        for(int i=0; i<k; i++)
        {
            ans.push_back(minheap.top().second);
            minheap.pop();
        }
        return ans;
    }
};
