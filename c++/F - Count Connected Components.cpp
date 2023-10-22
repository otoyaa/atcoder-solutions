#include <bits/stdc++.h>          
#define read(x) cin>>x
#define vi vector<int>
#define l(i,s,n) for (int i=int(s);i<int(n);i++)
#define pb push_back
#define f first     // Manda Tina Pupu♡
#define s second     //  FURIAAAA
#define MAXN 100100
#define no cout<<"No"<<"\n"
#define yes cout<<"Yes"<<"\n"
#define pii pair<int,int>
typedef long long ll;
using namespace std;

vector<vector<int>> adj(MAXN);
vector<bool> visited(MAXN);

void dfs(int raiz){
    visited[raiz]=true;
    for(auto w:adj[raiz]){
        if(visited[w])continue;
        dfs(w);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    int n,m;cin>>n>>m;
    adj.resize(n); //adj somente para Vert
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        u--;v--; // o problema começa
        // por 1
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int ans=0;
    visited.resize(n);// vis somente para
    // Vertices
    for(int i=0;i<n;i++){
        if(!visited[i])ans++,dfs(i);
        /*se vertice não foi visitado
        incrementa 1 na resposta
        e chama a dfs para analisar
        o proximo vertice*/
    }
    cout<<ans<<'\n';
}
