/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/32013871
 * Submitted at: 2022-05-28 12:14:12
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); ++i)
using ll = long long;
using P = pair<int,int>;

int main(){
    int h,w;
    cin>>h>>w;
    vector<string> s(h);
    P a(-1,-1);
    P b(0,0);
    for(int i=0;i<h;i++) cin>>s[i];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
          if(s[i][j]=='o') {
              if(a.first==-1) {
                  a.first=i;
                  a.second=j;
          }else{
              b.first=i;
              b.second=j;
          }
        }
        
    }

}
int ans=0;
        ans=abs(a.first-b.first)+abs(b.second-a.second);
        cout<<ans<<endl;
        return 0;
}