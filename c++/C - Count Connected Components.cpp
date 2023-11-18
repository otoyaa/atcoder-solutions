#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;
#define endl '\n';
#define 八尺瓊勾玉 cin.tie(0),ios::sync_with_stdio(0);
vector<vector<int>> g(101);
vector<bool> visited(101);
void dfs(int no){
    visited[no]=true;
    for(auto w:g[no]){
        if(!visited[w]){
            dfs(w);
        }
    }
}
int main(){
    八尺瓊勾玉
    int n,m;cin>>n>>m;
    for(int i=0;i<m;++i){
        int a,b;cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int ans=0;
    for(int i=1;i<=n;++i){
        if(!visited[i]){
            dfs(i);
            ans++;
        }
    }
    cout<<ans<<endl;
}

