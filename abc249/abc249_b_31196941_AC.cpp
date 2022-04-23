/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc249/submissions/31196941
 * Submitted at: 2022-04-23 12:47:09
 * Problem URL: https://atcoder.jp/contests/abc249/tasks/abc249_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
#define rep(i,n) for(int i=1; i<=(n); ++i)
using ll = long long;


int main(){
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<(int)s.size();i++){
        if(s[i]>='a'&&s[i]<='z') a++;
        if(s[i]>='A'&&s[i]<='Z') b++;
    }
bool p = true;
    for(int i=0;i<(int)s.size()-1;i++){
        for(int j=i+1;j<(int)s.size();j++){
            if(s[i] == s[j]) {
                p=false;
//cout<<s[i]<<endl;
                //cout<<s[j]<<endl;
                goto pp;}
        }
    }
    pp:
    if(p==false||a==0||b==0)cout<<"No"<<endl;
    else if(p==true&&a>0&&b>0) cout<<"Yes"<<endl;
    return 0;
}