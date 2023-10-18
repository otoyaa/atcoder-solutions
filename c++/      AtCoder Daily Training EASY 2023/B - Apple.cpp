#include <bits/stdc++.h>          
#define read(x) cin>>x
#define vi vector<int>
#define l(i,s,n) for (int i=int(s);i<int(n);i++)
#define pb push_back
#define f first     // Manda Tina Popo♡
#define s second
#define no cout<<"No"<<"\n"
#define yes cout<<"Yes"<<"\n"
#define pii pair<int,int>
typedef long long ll;
using namespace std;

void solve(){
    int x,y,n;cin>>x>>y>>n;
    if(x*3>y){
        cout<<(n/3)*y+(n%3)*x<<"\n";
    }else{
        cout<<x*n<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(0);   
    
    solve();
}
