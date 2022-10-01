/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc271/submissions/35315196
 * Submitted at: 2022-10-01 13:33:43
 * Problem URL: https://atcoder.jp/contests/abc271/tasks/abc271_c
 * Result: WA
 * Execution Time: 26 ms
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
using T = tuple<int,bool,bool>; //読んだ/打ったか
using graph=vector<vector<int>>;

int main(){
      int n,cnt=0;
      cin>>n;
      vector<int> a(n);
      deque<int> d;
      queue<int> q;
      sort(all(a));
      rep(i,n){
        d.push_back(a[i]);
      }
      while(!d.empty()){
        int now=d.front();
        if(cnt+1==now){
            cnt++;
            int r=d.front();
            d.pop_front();
            q.push(r);
            continue;
        }else {
            if((int)q.size()>=2){
                q.pop();
                q.pop();
                cnt++;
            }else if((int)q.size()==1){
                if((int)d.size()>=1){
                    d.pop_back();
                   // q.pop();
                    q.pop();
                    cnt++;
                }else {
                    cout<< cnt << endl;
                    return 0;
                }
            }else{
                if((int)d.size()>=2){
                    d.pop_back();
                    d.pop_back();
                    cnt++;
                }else{
                    cout<< cnt << endl;
                    return 0;
                }
            }
        }
      }
cout<< cnt << endl;
    }