#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <cmath>

using namespace std;

int INF = 1'000'000;

int main() {
    int N, K;
    cin >> N >> K;

    int64_t cnt1 = 0, cnt2 = 0;
    for(int i=1;i<=N;i++){
        if( i % K == 0 )    cnt1++;
        if( K % 2 == 0 && i % K == K/2 )  cnt2++;
    }

    int64_t ans = (int64_t) round( pow(cnt1, 3) );
    if( K % 2 == 0 ) ans +=(int64_t) round( pow(cnt2, 3) );

    cout << ans << endl;
}