class Solution {
public:
    // int climbStairs(int n) {
    //     vector<int> cache(n, -1);
    //     return dfs(n, 0, cache);
    // }

    // int dfs(int n, int i, vector<int> &cache)
    // {
    //     if(i==n) return 1;
    //     if(i>n) return 0;

    //     if(cache[i]!=-1)
    //         return cache[i];
        
    //     return cache[i]=dfs(n, i+1, cache) + dfs(n, i+2, cache);
    // }
    int climbStairs(int n)
    {
        if(n<=2) 
            return n;
        vector<int> dp(n+1);
        dp[1]=1;
        dp[2]=2;
        for(int i=3; i<=n; i++)
            dp[i]=dp[i-1]+dp[i-2];
        return dp[n];
    }
};
