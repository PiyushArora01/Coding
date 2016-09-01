#include <iostream>
using namespace std;
#define MAX 1000001

bool wins[MAX];
int squares[1001];

int main()
{
    fill(wins, wins+MAX, false);
    wins[0] = 0;
    int i, j;
    for(i = 1; i<1001; i++) {
        squares[i] = i*i;
    }
    //precompute
    for(i = 1; i<MAX; i++) {
        for(j = 1; squares[j] <= i; j++) {
            //if he wins at n, then we check at n+1 by using the following
            wins[i] = wins[i] | (!wins[i - squares[j]]);
            if(wins[i] == 1)
                break;
        }
    }

    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        if(wins[n])
            cout << "Win" << endl;
        else
            cout << "Lose" << endl;
    }
    return 0;
}
