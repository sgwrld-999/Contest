#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minGroupsForValidAssignment(vector<int>& nums) {
        //The question is stating that we have to find the grps which are valid
        // by the constraint that the size of the groups can't differer by 1 means difference between them
        //can be 0 or 1.
        //The size of the group will frequency of each element
        map<int,int>mp;
        int sizeOfNums = nums.size();
        for(int i = 0 ; i < sizeOfNums ; i++){
            mp[nums[i]] = 0;
        }
        for(int i = 0 ; i < sizeOfNums ; i++){
            mp[nums[i]]++;
        }
        vector<int> freqVec;
        for(auto i : mp){
            freqVec.push_back(i.second);
        }
        int miniFreq = freqVec[0];
        int ans = INT_MAX;
        for(int i = 1 ; i <= miniFreq ; i++){
            int miniSize = i;
            int miniSizePlusOne = i + 1;
            int numOfGrps = 0 ; 
            bool pos = false;
            for(int j = 0 ; j < freqVec.size() ; j++){
               int currGrp =  freqVec[j];
                int tempGrp = INT_MAX;
                int ctrOfGrps = 0 ;
                while(currGrp >= 0){
                    if(currGrp%miniSize == 0){
                        tempGrp = currGrp/miniSize + ctrOfGrps ;
                    }
                    currGrp -= miniSizePlusOne;
                    ctrOfGrps++;
                }
                if(tempGrp == INT_MAX){
                    pos = true;
                    break;
                }
                numOfGrps += tempGrp;
            }
            if(!pos){
                ans = min(ans,numOfGrps);
            }
        }
        return ans;
    }
};


using namespace std;

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3, 3, 3};
    Solution s;
    int ans = s.minGroupsForValidAssignment(nums);
    cout << "Minimum number of groups to create a valid assignment: " << ans << endl;
    return 0;
}
