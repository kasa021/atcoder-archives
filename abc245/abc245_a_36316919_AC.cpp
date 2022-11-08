/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/36316919
 * Submitted at: 2022-11-08 02:58:37
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;


int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<c){
        cout<< "Takahashi" << endl;
        //return 0;
    }else if(a>c){
        cout<< "Aoki" << endl;
        //return 0;
    }else {
        if(b<=d){
            cout<< "Takahashi" << endl;
        }else {
            cout<< "Aoki" << endl;
        }
    }
}