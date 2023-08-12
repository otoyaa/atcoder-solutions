#define rep(i,l) for(int i=0;i<(l);++i)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int d[100];
    set<int> usero;
    cin>>n;

    rep(i,n)cin>>d[i];
    rep(i,n)usero.insert(d[i]);
    cout<<usero.size()<<endl;
    
    return 0;

}
