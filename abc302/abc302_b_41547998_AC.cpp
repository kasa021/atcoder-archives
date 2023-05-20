/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc302/submissions/41547998
 * Submitted at: 2023-05-20 12:15:41
 * Problem URL: https://atcoder.jp/contests/abc302/tasks/abc302_b
 * Result: AC
 * Execution Time: 15 ms
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

vector<int> mx = {1,0,-1,0,1,1,-1,-1};
vector<int> my = {0,1,0,-1,1,-1,1,-1};
string snuke="snuke";
vector<string> s(109);
int h, w;

vector<P> f(int x,int y){
    rep(i,9){
        string t;
        int nx=x,ny=y;
        vector<P> res;
        rep(j,5){
            if(j!=0) nx+=mx[i],ny+=my[i];
            if(nx<0 || nx>=h || ny<0 || ny>=w) continue;
            t+=s[nx][ny];
            res.push_back(P(nx,ny));
        }
        if(t==snuke){
            return res;
        }
    }
    vector<P> res;
    return res;
}


int main(){
      cin>>h>>w;
      rep(i,h) cin>>s[i];
      rep(i,h){
        rep(j,w){
            if(s[i][j]=='s'){
                vector<P> res=f(i,j);
                string e;
                for(auto [p,q]:res){
                    e+=s[p][q];
                }
                if(e==snuke){
                    for(auto [p,q]:res){
                        cout<<p+1<<" "<<q+1<<endl;
                    }
                }
            }
        }
      }
    }