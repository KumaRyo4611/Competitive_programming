#include <bits/stdc++.h>
using namespace std;

int A, B, C;

int main(){
    cin >> A >> B >> C;

    bool flg = true;
    int ans = 0;
    while( A % 2 == 0 && B % 2 == 0 && C % 2 == 0 ){
        int tmpA = A;
        A = B / 2 + C / 2;
        int tmpB = B;
        B = tmpA / 2 + C / 2;
        int tmpC = C;
        C = tmpA / 2 + tmpB / 2;
        if( A == tmpA && B == tmpB && C == tmpC ){
            flg = false;
            break;
        }
        ans++;
    }

    if( flg )   cout << ans << endl;
    else        cout << -1 << endl;
}