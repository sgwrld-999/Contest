#include <bits/stdc++.h>
using namespace std;


int solve(int n){
    if(n == 1 || n == 0) return 1;
    
    return n * solve( n - 1)  ;
}


int nCr(int n){
    int a = solve(n) ;
    int b = solve(n-2);
    int ans = a / (2 * b);
    return ans;
}
int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while(t--){
	    int n ;
	    cin >> n ;
	    if(n == 2) cout << 2 << endl;
	    else {
	        int ans = n * (n-1);
	        cout << ans << endl ;
	    }
	}
	return 0;
}
