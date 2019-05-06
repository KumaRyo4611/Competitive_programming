#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

int INF = 1'000'000;

int main() {
    string S, T;
    cin >> S >> T;

    bool ans = true;
    unordered_map< char, vector<int> > tIndex, sIndex;
    for(int i=0;i<S.size();i++){
        sIndex[S[i]].push_back(i);
        tIndex[T[i]].push_back(i);
    }

    for(auto itr=tIndex.begin();itr!=tIndex.end();itr++){
        char c = S[ itr->second[0] ];
        for(int i=1;i<itr->second.size();i++){
            if( c != S[ itr->second[i] ] ){
                cout << "No";
                return 0;
            }
        }
    }

    for(auto itr=sIndex.begin();itr!=sIndex.end();itr++){
        char c = T[ itr->second[0] ];
        for(int i=1;i<itr->second.size();i++){
            if( c != T[ itr->second[i] ] ){
                cout << "No";
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
}