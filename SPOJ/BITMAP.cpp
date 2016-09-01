#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

#define INF 10000

int arr[190][190];
int m, n;

int BFS(int i, int j)
{
    queue<int> q;
    q.push(i);
    q.push(j);

    //mark current as zero;
    arr[i][j] = 0;

    while(!q.empty()) {
        //get x & y
        int x = q.front();
        q.pop();
        int y = q.front();
        q.pop();

        //check the possibility of reaching a neighbour in minimum steps
        int dist = arr[x][y] + 1;

        //check left
        if(y-1 >= 0 && dist < arr[x][y-1]) {
            q.push(x);
            q.push(y-1);
            arr[x][y-1] = dist;
        }
        //check right
        if(y+1 < n && dist < arr[x][y+1]) {
            q.push(x);
            q.push(y+1);
            arr[x][y+1] = dist;
        }
        //check up
        if(x-1 >= 0 && dist < arr[x-1][y]) {
            q.push(x-1);
            q.push(y);
            arr[x-1][y] = dist;
        }
        //check down
        if(x+1 < m && dist < arr[x+1][y]) {
            q.push(x+1);
            q.push(y);
            arr[x+1][y] = dist;
        }
    }
}

int main()
{
    int test;
    cin >> test;
    while(test--) {
        vector< pair<int, int> > vc;
        cin >> m >> n;
        int i, j;
        for(i = 0; i<m; i++) {
            for(j = 0; j<n; j++) {
                char c;
                cin >> c;
                //if it is 1, mark the distance to be -INF and add (i, j) into the vector
                if(c == '1') {
                    arr[i][j] = -INF;
                    vc.push_back(make_pair(i, j));
                } else {
                    //if it is 0, mark the distance to be INF
                    arr[i][j] = INF;
                }
            }
        }

        //call BFS for each (i, j) in vector
        for(i = 0; i<vc.size(); i++)
            BFS(vc[i].first, vc[i].second);
        
        //print the distance array
        for(i = 0; i<m; i++) {
            for(j = 0; j<n; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}