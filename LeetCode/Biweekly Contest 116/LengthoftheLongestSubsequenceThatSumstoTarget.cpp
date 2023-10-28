#include<bits/stdc++.h>
using namespace std;

/*
We need to find the minimum lenght of the SUBSEQUENCE whose sum is equal to target.
Whenever we see the word subsequence, we need to think of DP. Additionally we need to find the minimum length.
So, We have to explore the entire search space and find the minimum length.
How to explore the entire search space?
RECURSION 
But, we need to memoize the result to avoid TLE.
For that we need to store the result of the subproblems.
So, we need to store the result of the subproblems in a 2D array.
dp[i][j] = minimum length of the subsequence whose sum is equal to j and the subsequence is starting from index i.
How we know the DP dimension ?
Because there are 2 variables which are changing in the recursion. So, we need 2D array.

NOTE : Number of variables changing in the recursion = Number of dimensions in the DP array.

*/

class Solution {
public:
    int solve(int i, int n, vector<int>& nums, int target, vector<vector<int>>& dp) {
        if (target == 0)
            return 0;
        if (i >= n || target < 0)
            return -1001;
        if (dp[i][target] != -1)
            return dp[i][target];
        
        int takeCtr = 1 + solve(i + 1, n, nums, target - nums[i], dp);
        
        int notTakeCtr = solve(i + 1, n, nums, target, dp);
        dp[i][target] = max(takeCtr, notTakeCtr);
        
        return dp[i][target];
    }

    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n = nums.size();
        
        vector<vector<int>> dp(n+1, vector<int>(target + 1, -1));
        
        int ans = solve(0, n, nums, target, dp);
        if (ans < 0)
            return -1;

        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,2,3,4,5};
    int target = 15;
    cout << s.lengthOfLongestSubsequence(nums, target) << endl;
    return 0;
}