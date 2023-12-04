#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while(t--){
	    int total , boys , grpSize ;
	    cin >> total >> boys >> grpSize ;
	    int girls = total - boys ;
	    int remBoys = boys % grpSize ;
	    int remGirls = girls % grpSize ;
	    cout << abs(remBoys - remGirls) << endl;
	    
	}
	return 0;
}
