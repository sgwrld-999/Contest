#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
/*
The question was to find the minimum sum of a mountain triplet in the vector.
To do this we first find all the possible mountain triplets in the vector and store them in a vector.
Then we find the minimum sum of the mountain triplets in the vector.
And time complexity is O(n^3).
And space complexity is O(n).
It was accepted in the LeetCode Weekly Contest 368. Because the input size was small. 
Constraints:
     3 <= nums.length <= 50
    1 <= nums[i] <= 50
But it is not an efficient solution.
*/
    int minimumSum(vector<int>& nums) {
        int sizeOfNums = nums.size();
        vector<int> miniVec;
        for (int i = 0; i < sizeOfNums - 2; i++) {
            for (int j = i + 1; j < sizeOfNums - 1; j++) {
                for (int k = j + 1; k < sizeOfNums; k++) {
                    if (nums[i] < nums[j] && nums[j] > nums[k]) {
                        int tempSum = nums[i] + nums[k] + nums[j];
                        miniVec.push_back(tempSum);
                    }
                }
            }
        }
        if (miniVec.empty()) {
            return -1; 
        }
        auto mini = *min_element(miniVec.begin(), miniVec.end());
        return mini;
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
