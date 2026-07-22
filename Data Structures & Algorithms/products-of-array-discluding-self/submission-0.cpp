class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length=nums.size();
        vector<int> prefix_product(length);
        vector<int> suffix_product(length);
        vector<int> ans(length);

        prefix_product[0]=1;
        for(int i=1; i<length; i++)
            prefix_product[i]=prefix_product[i-1]*nums[i-1];;

        suffix_product[length-1]=1;
        for(int i=length-2; i>=0; i--)
            suffix_product[i]=suffix_product[i+1]*nums[i+1];
        
        for(int i=0; i<length; i++)
            ans[i]=prefix_product[i]*suffix_product[i];

        return ans;
    }
};
