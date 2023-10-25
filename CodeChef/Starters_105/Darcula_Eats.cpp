#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t ; 
	cin >> t;
	while(t--){
	    long long days;
	    cin >> days ;
        //If days are 1 or 0 than we don't need to do anything
        //as we can't make any pair of vampires and lycans
        //If days are 2 than we can make only one pair of vampires and lycans
        //as we can't make any pair of vampires and lycans
	    if(days == 1 || days == 0){
	        cout << 0 << endl ;
	    }
	    else if(days == 2){
	        cout << 1 << endl ;
	    }else{
            /*
                If we substract 2 from the total days then our starting pointing will be tuesday and we just have to find the number of tuesdays
                Lets assume that 15 is the input then 15 - 2 = 13
                13 / 7 = 1
                Ans = 1 + 1 = 2 
            */
	        long long ctr = 1 ;
	        days = days - 2 ;
	        long long res = days / 7 ;
	        cout << res + ctr << endl;
	    }
	}
	return 0;
}
