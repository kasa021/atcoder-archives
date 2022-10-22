/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc274/submissions/35896902
 * Submitted at: 2022-10-22 13:39:29
 * Problem URL: https://atcoder.jp/contests/abc274/tasks/abc274_d
 * Result: WA
 * Execution Time: 2205 ms
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

int main(){
      int n,x,y;
      cin>>n>>x>>y;
      vector<int> a(n+9);
      rep(i,n) cin>>a[i];
      map<int,vector<P>> mp;
      mp[0].push_back(P(0,0));
      mp[1].push_back(P(a[0],0));
      
      rep1(i,1,n+1){
        rep(j,(int)mp[i].size()){
            auto v=mp[i];
            int x1,y1,x2,y2;
            if(i%2==1){
                x1=v[j].first;
                x2=v[j].first;
                y1=(v[j].second+a[i+1]);
                y2=(v[j].second-a[i+1]);
                // cout<< x1<<" "<<y1 << endl;
                // cout<< x2<<" "<<y2 << endl;
            }
            else if(i%2==0){
                x1=(v[j].first+a[i+1]);
                x2=(v[j].first-a[i+1]);
                y1=v[j].second;
                y2=v[j].second;
                // cout<< x1<<" "<<y1 << endl;
                // cout<< x2<<" "<<y2 << endl;
            }

            set<P> st;
            if(abs(x1)<=10000&&abs(y1)<=10000&&!st.count(P(x1,y1))){
                mp[i+1].push_back(P(x1,y1));
                st.insert(P(x1,y1));
            } 
            if(abs(x2)<=10000&&abs(y2)<=10000&&!st.count(P(x2,y2))){
                mp[i+1].push_back(P(x2,y2));
                st.insert(P(x2,y2));
            } 
        }
      }
      rep(i,(int)mp[n+1].size()){
        auto v=mp[n+1];
        if(x==v[i].first&&y==v[i].second){
            cout<< "Yes" << endl;
            return 0;
        }else {
            cout<< "No" << endl;
            return 0;
        }
      }
    //   rep(i,n+1){
    //     cout<< i<<" " ;
    //     for(auto v:mp[i]){
    //         cout<< v.first<<" "<<v.second<<" ";
    //     }
    //     cout << endl;
    //   }
    }