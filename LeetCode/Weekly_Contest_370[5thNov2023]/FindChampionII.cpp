#include<bits/stdc++.h>
using namespace std;
/*
Problem link : https://leetcode.com/contest/weekly-contest-370/problems/find-champion-ii/

*/
class Solution {
public:
    int findChampion(int n, vector<vector<int>>& ed) {
    vector<int> inDeg(n, 0);
    int m = ed.size();
    
    for (int i = 0; i < m; i++) {
        inDeg[ed[i][1]]++;
    }
    
    int ctr = 0;
    int championCandidate = -1;

    for (int i = 0; i < n; i++) {
        if (inDeg[i] == 0) {
            ctr++;
            if (ctr > 1) {
                return -1;
            }
            championCandidate = i; 
        }
    }
    return (ctr == 1) ? championCandidate : -1;
}
};

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> ed(m, vector<int>(2));
    for(int i=0; i<m; i++){
        cin>>ed[i][0]>>ed[i][1];
    }
    Solution s;
    cout<<s.findChampion(n, ed);
    return 0;
}