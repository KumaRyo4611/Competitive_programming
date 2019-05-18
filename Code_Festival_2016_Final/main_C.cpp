#include <bits/stdc++.h>
using namespace std;

int N;

int main(){
    cin >> N;

    int score = 0, ans = 0;
    while ( score < N ) score += ++ans;

    for(int i=ans;i>0;i--){
        if( i <= N){
            cout << i << endl;
            N -= i;
        }
    }
}