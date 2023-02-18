/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc156/submissions/38980144
 * Submitted at: 2023-02-18 13:03:49
 * Problem URL: https://atcoder.jp/contests/arc156/tasks/arc156_a
 * Result: AC
 * Execution Time: 130 ms
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
        vector<int> now;
        rep(j,n){
            if(s[j]=='1'){
                now.push_back(j);
                cnt++;
            }
        }
        if(cnt==0)cout<< 0 << endl;
        else if(cnt%2==1){
            cout<< -1 << endl;
        }else if(cnt==2){
            if(now[1]-now[0]==1){
                if(n==3){
                    cout<< -1 << endl;
                }else if(n==4){
                    if(now[0]==1 && now[1]==2){
                        cout<< 3 << endl;
                    }else cout<< 2 << endl;
                }else cout<< 2 << endl;
            }else cout<< 1 << endl;
        }else {
            cout<< cnt/2 << endl;
        }
        
    }
}