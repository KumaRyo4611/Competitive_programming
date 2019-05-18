#include <bits/stdc++.h>
using namespace std;

int64_t INF = 5'000'000'000'000'000;

string S;
int64_t K;

int main() {
    cin >> S >> K;

    char ans='1';
    for(int i=0;i<S.size();i++){
        if( S[i] != '1' ){
            ans = S[i];
            break;
        } else if( S[i] == '1' && i+1 == K ){
            ans = S[i];
            break;
        }
    }

    cout << ans << endl;
}