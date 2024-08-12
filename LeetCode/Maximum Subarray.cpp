#include <bits/stdc++.h>

class Solution
{
public:
    int maxSubArray(std::vector<int> &nums)
    {

        int mx_sum = nums[0];
        int sum = 0;
        int last = 0;
        std::vector<int> dp(nums.size());
        dp[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            int ans = std::max(dp[i - 1] + nums[i], nums[i]);
            mx_sum = std::max(mx_sum, ans);

            dp[i] = ans;
        }
        return mx_sum;
    }
};
