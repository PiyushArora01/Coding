#include <iostream>
using namespace std;

int main()
{
    int arr[10];
	int sum = 0;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
        if (sum >= 100) {
            if (sum - 100 <= 100 - (sum - arr[i]))
				cout << sum << endl;
            else
				cout << sum - arr[i];
            return 0;
        }
    }
    cout << sum << endl;
    return 0;
}
