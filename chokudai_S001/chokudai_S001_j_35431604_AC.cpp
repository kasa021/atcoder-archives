/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/chokudai_S001/submissions/35431604
 * Submitted at: 2022-10-06 10:05:32
 * Problem URL: https://atcoder.jp/contests/chokudai_S001/tasks/chokudai_S001_j
 * Result: AC
 * Execution Time: 57 ms
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

pair<ll,vector<int>> bub(vector<int>& a){
    int n=a.size();                        //入力された配列のsizeをとる。
    if(n==1) return {0,a};                 //n==1なら、0,aを返す。
    int mid=n/2;
    vector<int> l(a.begin(),a.begin()+mid);//配列を二つに分割する。
    vector<int> r(a.begin()+mid,a.end());
    auto left=bub(l);                      //ここで再起する。
    auto right=bub(r);
    vector<int> res;                       //答えを返す配列を用意する
    ll inv=0;
    inv+=left.first+right.first;           //要素を交換した（転倒数）
    int i=0,j=0;
    while(i<(int)left.second.size()&&j<(int)right.second.size()){
        if((int)left.second[i]<(int)right.second[j]){//配列をresに昇順に挿入していく
            res.push_back(left.second[i++]);
        }else{
            res.push_back(right.second[j++]);
            inv+=left.second.size()-i;      //left[i]<left[i+1]<...なのでそれらについても転倒が起こるので
                                            //left.second.size()-1をたす。
        }
    }
    while(i<(int)left.second.size()){res.push_back(left.second[i++]);}
    while(j<(int)right.second.size()){res.push_back(right.second[j++]);}
    return {inv,res};

}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    ll ans=bub(a).first;
    cout<< ans << endl;
}