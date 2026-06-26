class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, count = 0;
        for(auto n: nums)
        {
            if(count==0)
                candidate = n;
            
            if(n==candidate)
                count++;
            else count--;
        }
        return candidate;
    }
};