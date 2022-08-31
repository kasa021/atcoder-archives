/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc244/submissions/34472019
 * Submitted at: 2022-08-31 06:36:14
 * Problem URL: https://atcoder.jp/contests/abc244/tasks/abc244_b
 * Result: AC
 * Execution Time: 10 ms
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
    int n;
    string s;
    cin>>n>>s;
    int size=s.size(),v=0,x=0,y=0;
    rep(i,size){
        if(s[i]=='S'){
            if(v==0) x++;
            else if(v==1) y--;
            else if(v==2) x--;
            else if(v==3) y++;
        }else{
            v++;
            v%=4;
        }
    }
  cout<<x<<" "<<y<<endl;
}