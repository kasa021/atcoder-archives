/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc217/submissions/38531735
 * Submitted at: 2023-02-01 14:56:28
 * Problem URL: https://atcoder.jp/contests/abc217/tasks/abc217_e
 * Result: WA
 * Execution Time: 216 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
using ull=unsigned long long;
//typedef modint1000000007 mint;


int main(){
    int q;
    cin>>q;
    queue<int> que;
    priority_queue<int,vector<int>, greater<int>> pq;
    rep(_,q){
        int i;
        cin>>i;
        if(i==1){
            int x;
            cin>>x;
            que.push(x);
        }else if(i==2){
            if(!pq.empty()){
                cout<< pq.top() << endl;
                pq.pop();
            }else {
                cout<< que.front() << endl;
            }
        }else {
            while(!que.empty()){
                pq.push(que.front());
                que.pop();
            }
        }
    }
    }
