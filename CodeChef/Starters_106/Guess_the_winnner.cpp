#include <bits/stdc++.h>
using namespace std;
/*
According to the question given that given N and K is prime factor of the N we have to substract the prime factor which is odd 
if there is no odd prime number left on the N then then Bob ro alice can win.
For example: N = 12 so prime factor of 12 is 2,3 so we have to substract the odd prime factor which is 3 and 1 so 12-3-1 = 8 
so after substracting the number is 8 so Bob can't make a move so Alice win.
Ex 2 : N = 15 so prime factor of 15 is 3,5 so we have to substract the odd prime factor which is 3 and 1 so 15-3-1 = 11
so after substracting the number is 11 so Bob can make a move so Bob win as alice will not be able to make a move as there were only 2 factor in the N.
WHich was prime.
For 4 : N = 4 || PF : 2 || Num of PF : 1 || Odd PF : 0 || Bob win
for 5 : N = 5 || PF : 5 || Num of PF : 1 || Odd PF : 1 || Alice win
For 6 : N = 6 || PF : 2,3 || Num of PF : 2 || Odd PF : 1 || Alice win
For 7 : N = 7 || PF : 7 || Num of PF : 1 || Odd PF : 1 || Alice win
For 8 : N = 8 || PF : 2 || Num of PF : 1 || Odd PF : 0 || Bob win
For 10 : N = 10 || PF : 2,5 || Num of PF : 2 || Odd PF : 1 || Alice win
For 11 : N = 11 || PF : 11 || Num of PF : 1 || Odd PF : 1 || Alice win
For 12 : N = 12 || PF : 2,3 || Num of PF : 2 || Odd PF : 1 || Alice win
For 13 : N = 13 || PF : 13 || Num of PF : 1 || Odd PF : 1 || Alice win
For 14 : N = 14 || PF : 2,7 || Num of PF : 2 || Odd PF : 1 || Alice win
For 15 : N = 15 || PF : 3,5 || Num of PF : 2 || Odd PF : 2 || Bob win
For 16 : N = 16 || PF : 2 || Num of PF : 1 || Odd PF : 0 || Bob win
For 17 : N = 17 || PF : 17 || Num of PF : 1 || Odd PF : 1 || Alice win
For 18 : N = 18 || PF : 2,3 || Num of PF : 2 || Odd PF : 1 || Alice win
For 19 : N = 19 || PF : 19 || Num of PF : 1 || Odd PF : 1 || Alice win
For 20 : N = 20 || PF : 2,5 || Num of PF : 2 || Odd PF : 1 || Alice win
For 21 : N = 21 || PF : 3,7 || Num of PF : 2 || Odd PF : 2 || Bob win
For 22 : N = 22 || PF : 2,11 || Num of PF : 2 || Odd PF : 1 || Alice win
For 23 : N = 23 || PF : 23 || Num of PF : 1 || Odd PF : 1 || Alice win
For 24 : N = 24 || PF : 2,3 || Num of PF : 2 || Odd PF : 1 || Alice win
For 25 : N = 25 || PF : 5 || Num of PF : 1 || Odd PF : 1 || Alice win
For 26 : N = 26 || PF : 2,13 || Num of PF : 2 || Odd PF : 1 || Alice win
For 27 : N = 27 || PF : 3 || Num of PF : 1 || Odd PF : 1 || Alice win
For 28 : N = 28 || PF : 2,7 || Num of PF : 2 || Odd PF : 1 || Alice win
For 29 : N = 29 || PF : 29 || Num of PF : 1 || Odd PF : 1 || Alice win
For 30 : N = 30 || PF : 2,3,5 || Num of PF : 3 || Odd PF : 2 || Bob win

By observation if for the even number their one of the prime factor is odd one so ODD * EVEN = EVEN.
And all the prime number are ODD as well so excluding 1 to all the number of PF is 1 fo PF.
*/

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(n%2 == 0 || n ==1 ) {
            cout << "Bob" << endl;
        }
        else {
            cout << "Alice" << endl ;
        }
    }
    return 0;
}
