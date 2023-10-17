#include <bits/stdc++.h>
#define read(x) cin>>x
#define vi vector<int>
#define l(i,s,n) for (int i=int(s);i<int(n);i++)
#define pb push_back
#define f first
#define s second
#define no cout<<"NO"<<"\n"
#define yes cout<<"YES"<<"\n"
#define pii pair<int,int>
typedef long long ll;
using namespace std;

void solve(){
    int n;read(n);
    vi v(n);
    for(int i=0;i<n;i++)read(v[i]);
    vi copy=v;
    sort(v.begin(),v.end());
    int bb=v[v.size()-2];
    int f=distance(copy.begin(),find(copy.begin(),copy.end(),bb));
    cout<<f+1<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
