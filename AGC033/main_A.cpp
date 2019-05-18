#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <numeric>
#include <algorithm>
#include <math.h>
#include <queue>

using namespace std;

int INF = 1000000000;

int H, W;
char A[1000][1000];
int d[1000][1000];

typedef pair<int, int> P;

int main(){
    cin >> H >> W;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++)    cin >> A[i][j];
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++)    d[i][j] = INF;
    }

    queue<P> que;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if( A[i][j] == '#' ){
                que.push(P(i, j));
                d[i][j] = 0;
            }
        }
    }

    while ( que.size() ){
        P pos = que.front();
        que.pop();
        int y = pos.first;
        int x = pos.second;
        if( 0 < x ){
            if( d[y][x-1] == INF ){
                que.push(P(y, x-1));
                d[y][x-1] = d[y][x] + 1;
            }
        }
        if( 0 < y ){
            if( d[y-1][x] == INF ){
                que.push(P(y-1, x));
                d[y-1][x] = d[y][x] + 1;
            }
        }
        if( x < W-1 ){
            if( d[y][x+1] == INF ){
                que.push(P(y, x+1));
                d[y][x+1] = d[y][x] + 1;
            }
        }
        if( y < H-1 ){
            if( d[y+1][x] == INF ){
                que.push(P(y+1, x));
                d[y+1][x] = d[y][x] + 1;
            }
        }
    }

    int ans = 0;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++)    ans = max(ans, d[i][j]);
    }
    
    cout << ans << endl;
}