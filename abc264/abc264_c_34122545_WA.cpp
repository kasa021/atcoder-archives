/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc264/submissions/34122545
 * Submitted at: 2022-08-18 06:56:17
 * Problem URL: https://atcoder.jp/contests/abc264/tasks/abc264_c
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
using ll = long long ;
typedef pair<ll, ll> P;
typedef tuple<string, ll, ll> T;

int main() {
    int h1,w1,h2,w2;
    cin>>h1>>w1;
    int a[h1][w1];
    rep(i,h1){
        rep(j,w1)cin>>a[i][j];
    }
    //int h2,w2;
    cin>>h2>>w2;
    int b[h2][w2];
    rep(i,h2){
        rep(j,w2)cin>>b[i][j];
    }
    int cnt=0;
    vector<vector<P>> bo(h2,vector<P>(w2));

    rep(i,h2){
        rep(j,w2){
            rep(k,h1){
                rep(l,w1){
                    if(b[i][j]==a[k][l]){
                        cnt++;
                        bo[i][j]=P(k,l);
                    }
                }
            }
        }
    }
    if(cnt!=h2*w2) {
        cout<<"No"<<endl;
        return 0;
    }
    else{
        for(int i=0;i<h2;i++){
            for(int j=0;j<w2;j++){
                for(int k=0;k<h2;k++){
                    for(int l=0;l<w2;l++){
                        int x,y,z,w;
                        x=bo[i][j].first;
                        y=bo[i][j].second;
                        z=bo[k][l].first;
                        w=bo[k][l].second;
                        if((x==z+1&&y==w+1)||(x==z+1&&y==w-1)||(x==z-1&&y==w+1)||(x==z-1&&y==w-1)){
                            cout<<"No"<<endl;
                            return 0;
                        }
                    }
                }
            }
        }
        
    }
    cout<<"Yes"<<endl;
    return 0;


}