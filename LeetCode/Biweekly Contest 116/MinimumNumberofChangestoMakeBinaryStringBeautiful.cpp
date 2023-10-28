#include<bits/stdc++.h>
using namespace std;

/*
According to the question, we need to make the string beautiful
the lenght of the string is even and each substring contain 
even number of 0's and 1's.
So,the minimum number of changes required is the number of is to change the adjacent 
characters to make the string beautiful.

11000111
If we partition the string into 2 parts, then the number of changes required is the
Part 1 : 1100 -> 11 || 00 : Even number of 0's and 1's
Part 2 : 0111 -> 01 || 11 : not even number of 0's or 1's
So, we need to change the adjacent characters in the second part to make it beautiful.
_____________________________________________________________


This is working because the the smallest group size is 2.
So, how many time we need to change the adjacent characters to make it beautiful.
The answer is the number of characters in the string which are not equal to their adjacent characters.


*/
int minChanges(string s) {
        int n = s.size();
        int ans = 0 ;
        for(int i = 0 ; i < n ; i+=2){
            if(s[i] != s[i+1])ans++;
        }
        return ans ;
};

int main(){
    string s ;
    cin >> s ;
    cout << minChanges(s) << endl;
    return 0;
}