/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc145/submissions/35813196
 * Submitted at: 2022-10-20 14:26:08
 * Problem URL: https://atcoder.jp/contests/abc145/tasks/abc145_c
 * Result: AC
 * Execution Time: 6 ms
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


double dis(int x1,int y1,int x2,int y2){
    double ans=0;
    ans=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return ans;
}
int main(){
      int n;
      double cnt=0,c=0;;
      cin>>n;
      vector<int> x(n),y(n),num(n);
      rep(i,n) cin>>x[i]>>y[i],num[i]=i;
      

      do{
        rep(i,n-1){
            cnt+=dis(x[num[i]],y[num[i]],x[num[i+1]],y[num[i+1]]);
        }
        c++;
      }while(next_permutation(all(num)));
      cnt/=c;
      printf("%.12f\n",cnt);
    }