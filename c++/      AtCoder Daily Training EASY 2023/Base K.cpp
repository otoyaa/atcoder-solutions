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

ll fantasy(string s, ll k){
    ll ans=0;
    for(char x:s){
        ans*=k;
        ans+=x-'0';
    }
    return ans;
}

void solve(){
    ll k;cin>>k;
    string a,b;cin>>a>>b;
    ll A=fantasy(a,k);
    ll B=fantasy(b,k);
    cout<<A*B<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
