class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        hashmap.reserve(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            auto it = hashmap.find(complement);
            if (it != hashmap.end()) {
                return {it->second, i};
            }

            hashmap[nums[i]] = i;
        }

        return {};
    }
};