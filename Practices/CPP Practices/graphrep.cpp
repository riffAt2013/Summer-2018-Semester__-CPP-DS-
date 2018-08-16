#include<bits/stdc++.h>
#define MAXN 100001
#define pb push_back
using namespace std;

vector<int> G[MAXN];

int main() {
    int vertex , edge;
    cin >> vertex >> edge;
    for(int i = 0 ; i < edge ; i++) {
        int x , y;
        cin >> x >> y;
        G[x].pb(y);
        G[y].pb(x);
    }

    for(int i = 0 ; i < vertex ; i++) {
        cout << i << " : ";
        for(int j = 0 ; j < G[i].size() ; j++) {
            cout << G[i][j] << " ";
        }
        cout << endl;
    }

}


/*

4 5
0 1
1 2
2 0
1 3
3 2

*/
