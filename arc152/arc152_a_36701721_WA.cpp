/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc152/submissions/36701721
 * Submitted at: 2022-11-21 11:25:12
 * Problem URL: https://atcoder.jp/contests/arc152/tasks/arc152_a
 * Result: WA
 * Execution Time: 48 ms
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
      int n,le,l,r,len;
      cin>>n>>le;
      l=0,r=le;
      vector<int> a(n);
      rep(i,n) cin>>a[i];
      set<T> st;
      st.insert(T(r-l,l,r));

      rep(i,n){
        auto [len,left,right]=*rbegin(st);
        st.erase(T(len,left,right));
        //cout<< len<<" "<<left<<" "<<right << endl;
        if(a[i]==1){
            if(len>=2){
                int mid=(r+l)/2;
                if(r-mid>0) st.insert(T(r-mid,mid,r));
                if(mid-l>0) st.insert(T(mid-l,l,mid));
            }
        }else if(a[i]==2){
            if(len>=3){
                int mid=(r+l)/2;
                if(r-(mid+1)>0) st.insert(T(r-(mid+1),mid+1,r));
                if((mid-1)-l>0) st.insert(T((mid-1)-l,l,mid-1));
            }else if(len==1){
                cout<< "No" << endl;
                return 0;
            }
        }
      }
      cout<< "Yes" << endl;
    }