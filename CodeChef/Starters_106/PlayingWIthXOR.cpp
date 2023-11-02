#include <iostream>
#include <vector>
#include <deque>  
using namespace std;
/*
1 5 3 1 2 3 4 5
according to the question we have to find the number of subarray of size k which have which bitwise odd operator is ODD.
For example : N = 5 , K = 3 , A = 1 2 3 4 5
1 = -> 001
2 = -> 010
3 = -> 011
4 = -> 100
5 = -> 101
so for the subarray of size 3 we have to find the bitwise odd operator which is odd.
1 ^ 2 ^ 3 = 0
2 ^ 3 ^ 4 = 5
3 ^ 4 ^ 5 = 2
so there are 2 subarray which have odd bitwise operator.
To be more clear : ODD ^ EVEN = ODD
ODD ^ ODD = EVEN
EVEN ^ EVEN = EVEN
so if we have to find the subarray of size k which have odd bitwise operator we have to find the subarray which have odd number of odd number.
*/
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ctr = 0;
    for(int i=0;i<(n-k)+1;i++)
    {
        for(int j=i;j<i+k;j++)
        {
            if(arr[j]%2==1)
            {
                ctr++;
                break;
            }
        }
      }
      cout<<ctr<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
