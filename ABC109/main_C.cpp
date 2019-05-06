#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

int INF = 1'000'000;

int main() {
    int64_t N, X;
    cin >> N >> X;

    int64_t ans;
    vector<int64_t> x(N);
    for(int i=0;i<N;i++){
        cin >> x[i];
        if( i==0 )  ans = abs(X-x[i]);
        else{
            ans = __gcd(ans, abs(X-x[i]));
        }
    }

    cout << ans << endl;
}