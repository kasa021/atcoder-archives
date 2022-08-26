/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc106/submissions/34349903
 * Submitted at: 2022-08-26 13:04:01
 * Problem URL: https://atcoder.jp/contests/abc106/tasks/abc106_b
 * Result: AC
 * Execution Time: 6 ms
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
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i+=2){
        int cnt=0;
        for(int j=1;j<=i;j++){
            if(i%j==0) cnt++;
        }
        
        if(cnt==8) ans++;
        //cout<<cnt<<endl;
    }
    cout<<ans<<endl;
}