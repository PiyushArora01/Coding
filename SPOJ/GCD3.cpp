//Reference: https://www.quora.com/How-do-I-approach-this-problem-http-www-spoj-com-problems-GCD3
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--) {
        long long pow2[20];
        pow2[0] = 1;
        for(int i = 1; i<20; i++)
            pow2[i] = pow2[i-1] << 1;
        string n, m;
        int k;
        cin >> n >> m >> k;
        int size = n.size();
        //check if n is odd, then the gcd will be 1
        int x = n[size-1] - '0';        //last digit
        if(x & 1)                       //for odd, last digit in binary will be 1
            cout << 1 << endl;
        else {
            long long temp;
            int i = (size < k) ? size : k;  //since q almost equal to size
            sscanf(&n[size - i], "%lld", &temp);  //copy number from string positions (size - i) to end to the variable temp
            cout << temp << endl;
            for( ; i > 0; i--) {
                if(! (temp & (pow2[i] - 1))) {
                    cout << pow2[i] << endl;
                    break;
                }
            }
        }

    }
    return 0;
}
