#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
/*
The question is same but the difference is that the input size is large.
Constraints:
    3 <= nums.length <= 10^5
    1 <= nums[i] <= 10^8

We can't use the previous solution because it will give TLE. And also we can't use approach of the O(n^2) solution.
So, we have to think of a different approach which is in the time complexity of O(n) or O(nlogn).
*/
    int minimumSum(vector<int>& nums) {
    //We have to find the minimum on the right as well as the left 
    //while keeping the constraint in mind that the i < j < k
    // nums[i] < nums[j] and nums[k] < nums[j] 
    //The logic is we've find the min on the left and on the right ignoring that value
    // Because we have to calculate all the sum triplets which hold for our condition or constraints
    
        int sumOfNum = nums.size();
        vector<int> leftMin(sumOfNum);
        vector<int> rightMin(sumOfNum);
        int mini = nums[0];
        for(int i = 0; i < sumOfNum; i++){
            leftMin[i] = mini;
            mini = min(mini, nums[i]);
        }
        mini = nums[sumOfNum - 1];
        for(int i = sumOfNum - 1; i >= 0; i--){
            rightMin[i] = mini;
            mini = min(mini, nums[i]);
        }
        int ans = INT_MAX;
        for(int j = 1; j < sumOfNum - 1; j++){
            if(nums[j] > leftMin[j] && nums[j] > rightMin[j]){
                int sum = leftMin[j] + nums[j] + rightMin[j];
                ans = min(ans, sum);
            }
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
        
};

int main() {
    vector<int> nums;
    int n, x;
    cout << "Enter the size of the vector: ";
    cin >> n;
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        nums.push_back(x);
    }
    Solution sol;
    int result = sol.minimumSum(nums);
    if (result == -1) {
        cout << "No mountain triplet found in the vector." << endl;
    } else {
        cout << "The minimum sum of a mountain triplet in the vector is: " << result << endl;
    }
    return 0;
}
