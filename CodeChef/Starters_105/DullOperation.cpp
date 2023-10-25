#include <iostream>
using namespace std;

/* 
The code is working fine because 
x || (x-1) = x  for all x >= 1 
as 7 = 111 and 6 = 110
so 7 || 6 = 111 || 110 = 111 = 7
And for x ^ (x-1) = 1 for all x >= 1
as 7 = 111 and 6 = 110
so 7 ^ 6 = 111 ^ 110 = 001 = 1
as XOR is odd ones dector means it'll throw 1 if there are odd number of 1's in the binary representation of the number
*/
pair<int,int> solve(){
        pair<int,int> pr{-1,-1};
        long long x ;
	    cin >> x ;
	    pr.first = x - 1 ;
	    pr.second = x ;
	    return pr;
}
int main() {
	// your code goes here
	long long t ;
	cin >> t;
	while(t--){
	    pair<int,int> pr = solve();
	    cout << pr.first << " " << pr.second << endl;
	}
	return 0;
}
