#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    int test;
    cin >> test;
    while(test--) {
        ll n;
        cin >> n;
        ll i = sqrt(n);
        ll j = 0;
        while(i > 0) {
            if(j * j > n) {
                cout << "No" << endl;
                break;
            }

            else if(i*i + j*j == n) {
                cout << "Yes" << endl;
                break;
            }

            else if(i*i + j*j < n)
                j++;
            
            else      //i*i + j*j > n
                i--;
        }
    }
    return 0;
}