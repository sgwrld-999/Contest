#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while(t--){
	    int n , x , d;
	    cin >> n >> x >> d ;
	    cout << (n / (5 * x)) + d << endl ;
	}
	return 0;
}
