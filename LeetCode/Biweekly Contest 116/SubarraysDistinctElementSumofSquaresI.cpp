#include<bits/stdc++.h>
using namespace std;
/*
Input : {1,2,3,2,1};
Output : 70

for i = 0 ;
   set 
    for j =  0 
    set : 1
    size = 1
    ans += size * size = 1*1 = 1
    for j = 1
    set : 1,2
    size = 2 
    ans += size * size = 2*2 = 4
    for j = 2
    set : 1,2,3
    size = 3
    ans += size * size = 3*3 = 9
    for j = 3
    set : 1,2,3
    size = 3
    ans += size * size = 3*3 = 9   
    for j = 4
    set : 1,2,3
    size = 3
    ans += size * size = 3*3 = 9
for i = 1
    set :
    for j = 1
    set : 2
    size = 1
    ans += size * size = 1*1 = 1
    for j = 2
    set : 2,3
    size = 2
    ans += size * size = 2*2 = 4
    for j = 3
    set : 2,3
    size = 2
    ans += size * size = 2*2 = 4
    for j = 4
    set : 2,3
    size = 2
    ans += size * size = 2*2 = 4
for i = 2
    set :
    for j = 2
    set : 3
    size = 1
    ans += size * size = 1*1 = 1
    for j = 3
    set : 2,3
    size = 2
    ans += size * size = 2*2 = 4
    for j = 4
    set : 1,2,3
    size = 2
    ans += size * size = 3*3 = 9
for i = 3
    set :
    for j = 3
    set : 2
    size = 1
    ans += size * size = 1*1 = 1
    for j = 4
    set : 1,2
    size = 2
    ans += size * size = 2*2 = 4
for i = 4
    set :
    for j = 4
    set : 1
    size = 1
    ans += size * size = 1*1 = 1

*/

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            set<int> mp;
            for (int j = i; j < n; j++) {
                mp.insert(nums[j]); 
                int distinct = mp.size();
                sum += distinct * distinct; 
            }
        }
        return sum;
    }
};

int main(){
    int n ;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0 ; i < n ; i++)cin >> nums[i];
    Solution sol;
    cout << "Ans : " << sol.sumCounts(nums) << endl;
}