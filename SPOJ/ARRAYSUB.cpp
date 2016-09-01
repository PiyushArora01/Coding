#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i;
    for(i = 0; i < n; i++)
        cin >> arr[i];
    int k;
    cin >> k;
    int j;
    int max;
    for(i = 0; i <= n - k; i++) {
        max = arr[i];
        for(j = 0; j < k; j++) {
            if(arr[i + j] > max)
                max = arr[i + j];
        }
        cout << max << " ";
    }
    cout << endl;
    return 0;
}