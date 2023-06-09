/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/code-festival-2016-qualb/submissions/42097516
 * Submitted at: 2023-06-09 10:22:19
 * Problem URL: https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_b
 * Result: AC
 * Execution Time: 151 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()

int main(){
    int n, a, b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int cnt_a=0, cnt_b=0;
    rep(i,n){
        if(s[i]=='a'){
            if(cnt_a+cnt_b<a+b){
                cout<<"Yes"<<endl;
                cnt_a++;
            }
            else cout<<"No"<<endl;
        }
        else if(s[i]=='b'){
            if(cnt_a+cnt_b<a+b && cnt_b<b){
                cout<<"Yes"<<endl;
                cnt_b++;
            }
            else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
    }
}