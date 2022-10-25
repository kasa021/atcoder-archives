/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc241/submissions/35966078
 * Submitted at: 2022-10-25 15:00:11
 * Problem URL: https://atcoder.jp/contests/abc241/tasks/abc241_c
 * Result: AC
 * Execution Time: 289 ms
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
int main(){
      int n;
      cin>>n;
      vector<string> s(n);
      rep(i,n){
        cin>>s[i];
      }

      rep(i,n){
        rep(j,n){
            rep(l,8){//’(i,j)の8方向見る
                int x=i,y=j;
                string t;
                rep(k,6){//(i,j)から6文字見る
                if(x<0||x>=n||y<0||y>=n) continue; 
                t+=s[x][y];
                x+=mx[l];
                y+=my[l];
                }
                int cnt=0;
                rep(k,(int)t.size()){
                    if(t[k]=='#') cnt++;
                }
                if((int)t.size()==6 && cnt>=4){
                    cout<< "Yes" << endl;
                    return 0;
                }
            }
        }
      }
      cout<< "No" << endl;
    }
