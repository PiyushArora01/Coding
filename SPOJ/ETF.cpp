/*
1) Initialize : result = n
2) Run a loop from 'p' = 2 to sqrt(n), do following for every 'p'.
     a) If p divides n, then 
           Set: result = result  * (1.0 - (1.0 / (float) p));
           Divide all occurrences of p in n.
*/
#include <iostream>
using namespace std;

int Phi(int n)
{
    int ans = n;                    //Initialize the answer as n
    int p;
    for(p = 2; p*p <=n; p++) {      //Consider all prime factors of n
        if(n%p == 0) {              //Check if p is prime
            while(n % p == 0)       //If yes, update n and result
                n/=p;
            ans -= ans/p;           //Ans = Ans*(1)/(1-p);
        }
    }
    //If n has a prime factor greater than sqrt(n) since there can be atmost one such prime factor
    if(n > 1)
        ans -= ans/n;
    return ans;
}

int main()
{
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;
        cout << Phi(n) << endl;
    }
    return 0;
}