/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/practice2/submissions/37285005
 * Submitted at: 2022-12-15 10:28:24
 * Problem URL: https://atcoder.jp/contests/practice2/tasks/practice2_b
 * Result: AC
 * Execution Time: 824 ms
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
    BIT(ll _n){
        n=_n;
        data.resize(n);
    }
    void add(ll i,ll x){
        i++;
        while(i<=n){
            data[i-1]+=x;
            i+=(i & -i);
        }
    }
    ll sum(int l,int r){
        return _sum(r) - _sum(l);
    }

    private:
    int n;
    vector<ll> data;
    ll _sum(int i){
        ll s=0;//sが単位元
        while(i>0){
            s += data[i-1];
            i -= (i & -i);
        }
        return s;
    }
};


int main() {
    ll n,q;
    cin>>n>>q;
    BIT bit(n);
    rep(i,n){
        int a;
        cin>>a;
        bit.add(i,a);
    }
    rep(i,q){
        ll t;
        cin>>t;
        if(t==0){
            int p,x;
            cin>>p>>x;
            bit.add(p,x);
        }else {
            int l,r;
            cin>>l>>r;
            cout<<bit.sum(l,r)<<endl;
        }
    }
}
   
