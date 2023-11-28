#include <bits/stdc++.h>          
#define 光線 cin.tie(0),ios::sync_with_stdio(0);cout.tie(0);
typedef long long ll;
using namespace std;

int main(){
    光線
    int h,w;cin>>h>>w;
    vector v(h,vector(w,0));
    for(int i=0;i<h;++i){
        for(int j=0;j<w;++j){
            cin>>v[i][j];
        }
    }
    int res=0;
    for(int bit=0;bit<(1<<h);++bit){
        auto vv=v;
        for(int i=0;i<h;++i){
            if(!(bit&(1<<i)))continue; // se bit não tiver contido em 2i
            for(int j=0;j<w;++j){
                vv[i][j]=1-vv[i][j];
            }
            int t=0;
            for(int j=0;j<w;++j){
                int num=0;
                for(int i=0;i<h;++i){
                    if(vv[i][j]==0)++num;
                }
                t+=max(num,h-num);
            }
            res=max(res,t);
        }
    }
    cout<<res<<'\n';
}

