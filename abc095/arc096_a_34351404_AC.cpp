/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc095/submissions/34351404
 * Submitted at: 2022-08-26 14:19:56
 * Problem URL: https://atcoder.jp/contests/abc095/tasks/arc096_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;

int main() {
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    if(a+b<=2*c){
        cout<<a*x+b*y<<endl;
    }else{
        int ans=0;
        ans+=min(x,y)*2*c;
        if(x==min(x,y)){
            if(b>2*c){
                ans+=(y-x)*2*c;
            }else{
                ans+=(y-x)*b;
            }
        }else{
            if(a>2*c){
                ans+=(x-y)*2*c;
            }else{
                ans+=(x-y)*a;
            }
        }
        cout<<ans<<endl;
    }
}