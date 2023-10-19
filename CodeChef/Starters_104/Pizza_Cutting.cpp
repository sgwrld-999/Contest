#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while(t--){
	    int ip;
	    cin >> ip;
	    if(ip == 1){
	        cout << "YES" << endl;
	        continue;
	    }
	    if(ip%2 == 0){
	        cout << "YES" << endl ;
	        continue;}
	    else{
	       cout << "NO" << endl ; continue;
	    } 
 	}
	return 0;
}
