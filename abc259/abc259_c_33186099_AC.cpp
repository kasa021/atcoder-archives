/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/33186099
 * Submitted at: 2022-07-12 11:34:46
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_c
 * Result: AC
 * Execution Time: 21 ms
 */

 #include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using graph = vector<vector<int>>;

int main(){
    string s,t;
    cin>>s>>t;
    int p=s.size(),q=t.size();
    int i=0,j=0,cnt=0;
    while(i!=p||j!=q){
        if(p<=i) i=p-1;
        //cout<<cnt<<endl;
        if(s[0]!=t[0]){
            cout<<"No"<<endl;
            return 0;
        }

        if(s[i]==t[j]){
            // cout<<i<<" "<<j<<endl;
            // cout<<s[i]<<t[j]<<endl;
            i++;
            j++;
        }else{
            if(i==1){
                cout<<"No"<<endl;
                //cout<<s[i]<<t[j]<<endl;
                return 0;
            }else{
                if(s[i-2]==t[j]){
                    // cout<<i<<" "<<j<<endl;
                    // cout<<s[i-2]<<t[j]<<endl;
                    j++;
                }else{
                    // cout<<i<<" "<<j<<endl;
                    // cout<<s[i-2]<<t[j]<<endl;
                    cout<<"No"<<endl;
                    return 0;
                }
            }
        }
        cnt++;
    }
    cout<<"Yes"<<endl;
    return 0;
    
}