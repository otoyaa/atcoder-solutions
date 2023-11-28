#include <bits/stdc++.h>          
typedef long long ll;
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;++i)cin>>A[i];
    int q;cin>>q;
    vector<int> M(q);
    vector<bool> ans(q,false);
    for(int i=0;i<q;++i)cin>>M[i];
    for(int bit=0;bit<(1<<n);++bit){
        int sum=0;
        for(int i=0;i<n;++i){
            if(bit&(1<<i))sum+=A[i];
            for(int j=0;j<q;++j){
                if(sum==M[j]){
                    ans[j]=true;
                }
            }
        }
    }
    for(int i=0;i<ans.size();++i){
        if(ans[i]){
            cout<<"Yes"<<'\n';
        }else{
            cout<<"No"<<'\n';
        }
    }
}

