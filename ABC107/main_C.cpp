#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <cmath>

using namespace std;

int64_t INF = 1'000'000'000'000'000'000;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int64_t> X(N);
    for(int i=0;i<N;i++)    cin >> X[i];

    int64_t ans = INF;
    for(int left=0;left<=N-K;left++){
        int right = left + K - 1;
        int64_t res = min(abs(X[left]), abs(X[right]));
        res += X[right] - X[left];
        ans = min(ans, res);
    }

    cout << ans << endl;
}