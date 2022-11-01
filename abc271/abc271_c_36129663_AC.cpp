/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc271/submissions/36129663
 * Submitted at: 2022-11-01 03:16:35
 * Problem URL: https://atcoder.jp/contests/abc271/tasks/abc271_c
 * Result: AC
 * Execution Time: 102 ms
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
      int n,cnt=0,same=0;
      cin>>n;
      vector<int> a(n);
      rep(i,n) cin>>a[i];
      sort(all(a));
      deque<int> d;

      d.push_back(a[0]);
      rep1(i,1,n){
        if(d.back()!=a[i]){
            d.push_back(a[i]);
        }else same++;
      }
      //cout<<same<<endl;
      while(!d.empty()){
        if(cnt+1==d.front()){
            cnt++;
            d.pop_front();
        }else{
            if(same>=2){
                same-=2;
                cnt++;
            }else if(same==1){
                d.pop_back();
                same--;
                cnt++;
            }else {
                if(d.size()>=2){
                    d.pop_back();
                    d.pop_back();
                    cnt++;
                }else break;
            }
        }
      }
      cout<< cnt+same/2 << endl;
    }