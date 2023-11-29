#include <bits/stdc++.h>          
#define 光線 cin.tie(0),ios::sync_with_stdio(0);cout.tie(0);
typedef long long ll;
using namespace std;
int n;

int main(){
    光線
    cin>>n;
    vector<int> x(8),y(8);
    for(int i=0;i<n;++i){
        cin>>x[i]>>y[i];
    }
    vector<int> f;
    for(int i=0;i<n;++i){
        f.push_back(i);
    }
    long double ans=0;
    do{
        for(int i=0;i<n-1;++i){
            int a=f[i]; // i
            int b=f[i+1]; // j
            long double dx=x[a]-x[b]; // xi-xj
            long double dy=y[a]-y[b]; // yi-yj
            ans+=sqrt(dx*dx+dy*dy); // sqrt xi-xj² + yi-y2²
        }
    }while(next_permutation(f.begin(),f.end()));
    for(int i=0;i<n;++i){
        ans/=(i+1); // media sum
    }
    cout<<fixed<<setprecision(10)<<ans<<'\n';
}
