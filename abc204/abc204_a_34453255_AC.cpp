/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc204/submissions/34453255
 * Submitted at: 2022-08-30 03:37:58
 * Problem URL: https://atcoder.jp/contests/abc204/tasks/abc204_a
 * Result: AC
 * Execution Time: 5 ms
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
    int x,y;
    cin>>x>>y;
    if(x==y){
        cout<<x<<endl;
    }else if(x+y==1){
        cout<<x+y+1<<endl;
    }else if( x+y==2){
        cout<<"1"<<endl;
    }else if(x+y==3){
        cout<<"0"<<endl;
    }
}