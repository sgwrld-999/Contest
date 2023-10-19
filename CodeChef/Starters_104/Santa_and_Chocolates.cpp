#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t ;
	while(t--){
	    int n , k ;
	    cin >> n >> k ;
	    vector<int> ipVec;
	    for(int i = 0 ; i < n ; i++){
	        int temp ;
	        cin >> temp ;
	        ipVec.push_back(temp);
	    }
	   // for(int i = 0 ; i < n ; i++){
	   //    cout <<  ipVec[i] << endl;
	   // }
	   vector<int> res(n,1);
	   long long sum = 0 ;
	   for(int i =0 ; i < n ; i++){
	       sum += ipVec[i];
	   }
	   if(sum < n){
	       cout << "NO" << endl;
	       continue;
	   }else{
	       int rem = sum % n ;
	       if(k == 0 && rem != 0){
	           cout << "NO" << endl ;
	       }else{
	           cout << "YES" << endl ;
	       }
	   }
	}
	return 0;
}
