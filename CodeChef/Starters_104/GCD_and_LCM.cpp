#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;

        if (x == y) {
            cout << 2 * x << endl;
        } else {
            while (k > 0) {
                int gcdOfNum = gcd(x, y);
                if(x > y){
                    if(x > gcdOfNum){
                       x = gcdOfNum; 
                    }
                }else{
                    if(y > gcdOfNum){
                       y = gcdOfNum; 
                    }
                    //y = gcdOfNum;
                }
                int lcmOfNum = lcm(x, y);
                if(x > y){
                    if(x > lcmOfNum){
                        x = lcmOfNum ;
                    }
                }else if(x < y){
                    if(y > lcmOfNum){
                        y = lcmOfNum ;
                    }
                }
                k--;
                if (x == y) {break;}
            }
            cout << x + y << endl;
        }
    }
    return 0;
}