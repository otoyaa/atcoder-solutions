#include <bits/stdc++.h>
#define read(x) cin>>x
#define vi vector<int>
#define l(i,s,n) for (int i=int(s);i<int(n);i++)
#define pb push_back
#define f first
#define s second
#define no cout<<"No"<<"\n"
#define yes cout<<"Yes"<<"\n"
#define pii pair<int,int>
typedef long long ll;
using namespace std;

void solve(){
    string x;read(x);
    string y=x.substr(1,3);
    if(y=="00"||y=="000"){
        yes;
    }else{
        no;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
