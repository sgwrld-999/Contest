#include <iostream>
using namespace std;
/*
Explanation : 
    - There are two cases :
        - a >= b
            Chef can take or give till a > b 
                If we to check for both if he's taking or giving while doing so which 
                will take less moves.
        - a < b
            Chef can only take till a > b
                Check only for taking.
*/
int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while(t--){
	    int a , b;
	    cin >> a >> b ;
	    int a1 = a ;
	    int b1 = b ;
	    int ans = 0;
	    if(a >= b){
	      while(a % b != 0 && a1 % b1 != 0){
	          a1--;b1++;
	          a++;b--;
	          ans++;
	      }
	    }else{
	        while(a % b != 0 ){
	          a++;b--;
	          ans++;
	      }
	    }
	   cout << ans << endl ;
	}
	return 0;
}
