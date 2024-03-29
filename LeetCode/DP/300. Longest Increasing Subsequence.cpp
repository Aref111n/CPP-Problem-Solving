class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size() ;
        int dp[n+1], mx=1 ;
        dp[0]=1 ;
        for(int i=1; i<n; i++) {
            dp[i]=1 ;
            for(int j=0; j<i; j++) {
                if(nums[j]<nums[i]) {
                    dp[i] = max(dp[i], dp[j]+1) ;
                }
            }
            mx = max(mx, dp[i]) ;
        }

        return mx;
    }
};
