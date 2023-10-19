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

void solve(){
    int n;read(n);
    vi v(n);
    int ans=0;
    for(int i=1;i<n;i++){
        read(v[i]);
        v[i]--;
    }
    vi dp(n);
    for(int i=1;i<n;i++){
        dp[i]=dp[v[i]]+1;
    }
    cout<<dp[n-1]<<"\n";
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
