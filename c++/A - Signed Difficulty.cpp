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
    string s;read(s);
    int n=s.size();
    int y=s[n-1]-'0'; // retirar o valor depois do ponto
    s=s.substr(0,n-2); // tirar o pedaço do numero
    if(y<=2){
        s+='-';
    }else if(y>=7){
        s+='+';
    }
    cout<<s<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
