/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc283/submissions/37519160
 * Submitted at: 2022-12-24 13:30:16
 * Problem URL: https://atcoder.jp/contests/abc283/tasks/abc283_e
 * Result: WA
 * Execution Time: 110 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;
int main(){
    int h,w,ans=0;
    cin>>h>>w;
    vector<vector<int>> a(h+9,vector<int>(w+9,0));
    vector<vector<bool>> ok(h+9,vector<bool>(w+9,false));
    rep(i,h){
        rep(j,w){
            cin>>a[i][j];
        }
    }
    vector<int> mx = {1,0,-1,0};
    vector<int> my = {0,1,0,-1};
    rep1(i,1,h){
        rep(j,w){
            rep(k,3){
                if(ok[i][k]) continue;
                int nx,ny;
                nx=i+mx[k];ny=j+my[k];
                if(nx<0 || nx>=h || ny<0 || ny>w) continue;
                if(a[i][j]==a[nx][ny]) ok[i][j]=true;
            }
        }
        bool f=true;
        rep(l,w) f^=ok[i][l];
        if(!f){
            ans++;
            rep(l,w){
                ok[i][l]=false;
                a[i][l]=1-a[i][l];
            }
            rep(j,w){
            rep(k,3){
                if(ok[i][k]) continue;
                int nx,ny;
                nx=i+mx[k];ny=j+my[k];
                if(nx<0 || nx>=h || ny<0 || ny>w) continue;
                if(a[i][j]==a[nx][ny]) ok[i][j]=true;
            }
            }
            f=true;
            rep(l,w) f^=ok[i][l];
            if(!f){
                cout<< -1 << endl;
                return 0;
            }
        }
    }
    cout<< min(ans,h-ans) << endl;
    }
