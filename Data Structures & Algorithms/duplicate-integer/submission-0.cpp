class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int, int> hashed;
        for(int i=0; i<n; i++){
            hashed[nums[i]]+=1;
            if(hashed[nums[i]]>1)
                return true;
        }
        return false;
    }
};