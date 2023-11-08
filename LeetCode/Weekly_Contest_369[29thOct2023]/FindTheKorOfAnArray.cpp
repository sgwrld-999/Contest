#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0 ; i < 32 ; i++){
            int ctr = 0;
            for(int val : nums){
                if(val & (1 << i)) ctr++;
            }
            if(ctr >= k) sum += pow(2,i);
        }
        return sum;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,2,3,4,5};
    int k = 3;
    cout << s.findKOr(nums,k) << endl;
    return 0;
}