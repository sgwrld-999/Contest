#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
Explanation : 
    - Given a number decrement it 1 and double it or we can say 2^x times until 
        we get a prime number.
*/
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    ll h;
    int move = 0;
    int i = 0;
    
    cin >> h;  

    while (i < 60 && h > 0) {
        if (isPrime(h)) {
            move++;
            break;
        }
        move++;
        h -= (1LL << i); 
        i++;
    }

    if (h < 0) {
        cout << -1 << endl;
    } else {
        cout << move << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
