/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc185/submissions/37285121
 * Submitted at: 2022-12-15 10:37:10
 * Problem URL: https://atcoder.jp/contests/abc185/tasks/abc185_f
 * Result: AC
 * Execution Time: 688 ms
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

struct BIT{
    public:
    BIT(int _n){
        n=_n;
        data.resize(n);
    }
    void add(int i,int x){//int iは0-indexed,int xは1-indexed
        i++;
        while(i<=n){
            data[i-1]^=x;
            i+=(i & -i);
        }
    }
    int sum(int l,int r){//int lは0-indexed,int rは1-indexed
        return _sum(r) ^ _sum(l);
    }

    private:
    int n;
    vector<int> data;
    int _sum(int i){
        int s=0;//sが単位元
        while(i>0){
            s ^= data[i-1];
            i -= (i & -i);
        }
        return s;
    }
};


int main() {
    int n,q;
    cin>>n>>q;
    BIT bit(n);
    rep(i,n){
        int a;
        cin>>a;
        bit.add(i,a);
    }
    rep(i,q){
        int t,x,y;
        cin>>t>>x>>y;
        if(t==1){
            bit.add(x-1,y);
        }else{
            cout<< bit.sum(x-1,y) << endl;
        }
    }
}
   
