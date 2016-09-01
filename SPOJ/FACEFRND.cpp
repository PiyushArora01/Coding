#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i;
    set<int> S;
    for(i = 0; i < n; i++) {
        int ID;
        cin >> ID;
        S.insert(ID);
        int m;
        cin >> m;
        int j;
        int x;
        for(j = 0; j < m; j++) {
            cin >> x;
            S.insert(x);
        }
    }
    int FoF = S.size() - n;
    cout << FoF << endl;
    return 0;
}