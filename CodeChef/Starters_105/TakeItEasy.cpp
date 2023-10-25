#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	long long t = 0 ; 
	cin >> t ;
	while(t--){
	    long long sizeOfArray = 0 ; 
	    cin >> sizeOfArray ;
	    long long sum = 0 ;
	    std::vector<int> ipVec(sizeOfArray,0);
	    for(int i = 0 ; i < sizeOfArray ; i++){
	        cin >> ipVec[i];
	        sum += ipVec[i];
	    }
        //we are checking after the divison of sum by sizeOfArray that the quotient is even or odd
        //If it's even than we are checking that all the elements of the array are even or odd
        //If all elements are even or odd than we can say that the array is balanced 
        //as we can make all the elements equal by adding or subtracting 2 from each element
        //Odd - Even = Odd
        //Even - Odd = Odd
        //Odd - Odd = Even
        //Even - Even = Even
        //So we can make all the elements equal by adding or subtracting 2 from each element
        //So, all elements should be even or odd as we can make all elements equal by adding or subtracting 2 from each element
        //Also making all the elements equal
	    long long quo = sum / sizeOfArray;
	    bool flag = true;
	    for(int i = 0 ; i < sizeOfArray ; i++){
	        if( quo % 2 != ipVec[i]%2){
	            flag = false;
	            break;
	        }
	    }
	    if(flag && sum == sizeOfArray * quo){
	        cout << "Yes" << endl;
	    }else
	        cout << "No" << endl;
	    
	    
	}
	return 0;
}
