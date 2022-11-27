/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc085/submissions/36843686
 * Submitted at: 2022-11-27 07:31:28
 * Problem URL: https://atcoder.jp/contests/abc085/tasks/abc085_c
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
    int n,m,sum=0;
    cin>>n>>m;
    rep(i,n+1){
        rep(j,n+1-i){
            int k=n-i-j;
                
                    sum=10000*i+5000*j+1000*k;
                    if(m==sum){
                        //cout<< m<<" "<<sum << endl;
                        cout<< i<<" "<<j<<" "<<k << endl;
                        return 0;
                    }
                
        }
    }
    cout<< "-1 -1 -1" << endl;

}
   
