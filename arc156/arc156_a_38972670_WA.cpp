/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc156/submissions/38972670
 * Submitted at: 2023-02-18 12:21:27
 * Problem URL: https://atcoder.jp/contests/arc156/tasks/arc156_a
 * Result: WA
 * Execution Time: 127 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
using ull=unsigned long long;
//typedef modint1000000007 mint;


int main(){
    int t;
    cin>>t;
    rep(i,t){
        int n,cnt=0;
        string s;
        cin>>n>>s;
        int cnt1=0,cnt2=0;
        rep(j,n){
            if(s[j]=='1'){
                if(j%2==0) cnt1++;
                else cnt2++;
            }
        }
        if(cnt1==cnt2){
            cout<<cnt1<<endl;
        }else if((cnt1%2==0 && cnt2%2==0) || (cnt1%2==0 && cnt2%2==0)){
            cout<< (cnt1+cnt2)/2<< endl;
        }else cout<< -1 << endl;
        
    }
}