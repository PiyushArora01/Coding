#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll n, m;
    cin >> n >> m;
    ll i = 0;
    ll arr[n];
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll sum = 0, temp = 0, start = 0;
    for(i = 0; i<n; i++) {
        if(sum < temp && temp < m)
            sum = temp;
        temp += arr[i];
        if(temp == m) {
            sum = temp;
            break;
        } else {
            while(temp > m) {
                temp -= arr[start++];

                if(temp == m) {
                    sum = temp;
                    break;
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}