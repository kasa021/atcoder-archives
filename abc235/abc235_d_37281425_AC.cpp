/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc235/submissions/37281425
 * Submitted at: 2022-12-15 06:49:55
 * Problem URL: https://atcoder.jp/contests/abc235/tasks/abc235_d
 * Result: AC
 * Execution Time: 42 ms
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
    int a,n,digit=1; cin>>a>>n;
    int m=n;
    while(m/10>=1){
        digit++;
        m/=10;
    }
    vector<int> seen(1e6,0);
    queue<int> que;
    que.push(1);
    seen[1]=1;
    while(!que.empty()){
        int tmp=que.front();que.pop();
        string c=to_string(tmp);
        string d=to_string(tmp*a);
        if(tmp>=10 && tmp%10!=0){
            string b="";b+=c[c.size()-1];
            c.insert(0,b);
            c.erase(c.size()-1,1);
            if(!seen[stoi(c)]){
                seen[stoi(c)]=seen[tmp]+1;
                que.push(stoi(c));
            }
        }
        if(d.size()>digit || seen[tmp*a]) continue;
        if(!seen[tmp*a]){
            seen[tmp*a]=seen[tmp]+1;
            que.push(tmp*a);
        }
    }
    cout<< (seen[n]==0 ? -1:seen[n]-1) << endl;

}
   

