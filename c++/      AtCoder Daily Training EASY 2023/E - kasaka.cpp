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
    string s;read(s);
    int x,y,n;n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='a')x++;
        else break;
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='a')y++;
        else break;
    }
    if(x==n){
        yes;
        return;
    }
    if(x>y){
        no;
        return;
    }
    for(int i=x;i<(n-y);i++){
        if(s[i]!=s[x+n-y-i-1]){
            no;
            return;
        }
    }
    yes;
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
