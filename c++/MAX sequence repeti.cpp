#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;
#define endl '\n';
#define 八尺瓊勾玉 cin.tie(0),ios::sync_with_stdio(0);
int main(){
    八尺瓊勾玉
    string s;cin>>s;
    ll n=s.size();
    ll ans=INT_MIN;
    for(int i=0;i<n;++i){
        ll c=0;
        char at=s[i];
        for(;i<n&&at==s[i];++i){
            ++c;
        }
        --i;
        ans=max(ans,c);
    }
    cout<<ans<<endl;
}

