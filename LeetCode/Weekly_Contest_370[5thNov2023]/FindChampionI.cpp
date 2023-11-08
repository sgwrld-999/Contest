#include<bits/stdc++.h>
using namespace std ;

/* 
Prolbem link : https://leetcode.com/contest/weekly-contest-370/problems/find-the-champion/ 
*/
class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> ans(n,0);
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 1) ans[i]++;
            }
        }
        int maxi = INT_MIN;
        int idx = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(maxi < ans[i]){
                maxi = ans[i];
                idx = i;
            }
        }
        return idx ;
    }
};

int main(){
    int n;
    cin >> n;
    vector<vector<int>> grid(n,vector<int>(n));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> grid[i][j];
        }
    }
    Solution obj;
    cout << obj.findChampion(grid) << endl;
    return 0;
}