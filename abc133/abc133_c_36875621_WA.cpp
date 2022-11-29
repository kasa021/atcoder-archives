/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc133/submissions/36875621
 * Submitted at: 2022-11-29 06:08:13
 * Problem URL: https://atcoder.jp/contests/abc133/tasks/abc133_c
 * Result: WA
 * Execution Time: 13 ms
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

vector<int> enum_div(int n){
    vector<int> res;
    res.push_back(1);
    res.push_back(n);
    for(int i = 2 ; i*i <= n ; ++i){
        if(n%i == 0){
            res.push_back(i);
            if(i*i != n){
                res.push_back(n/i);
           }
       }
   }
return res;
}

int main() {
    int l,r,m=2019;
    cin>>l>>r;
    rep1(i,l,min(r,l+2019)){
        rep1(j,i+1,min(r+1,i+2019)){
            //cout<< i<<" "<<j << endl;
            m=min(m,(i*j)%2019);
        }
    }
    cout<< m << endl;
}
   
