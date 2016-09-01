#include <iostream>
using namespace std;
#define ll long long

int main()
{
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;
        ll arr[n];
        int i;
        for(i = 0; i<n; i++) {
            cin >> arr[i];
        }
        ll absDiff = 0;
        for(i = 0; i<n; i++) {
            absDiff += arr[i]*i - arr[i]*(n-i-1);
        }
        cout << absDiff << endl;
    }
}