#define rep(i,l) for(int i=1;i<=(l);++i)
#include <bits/stdc++.h>
using namespace std;

int first_sum(int n){
    int f_sum=0;
    while (n>0){
        f_sum+=n%10;
        n/=10;
    }
    return f_sum;
}

int main(){
    int n,a,b;
    int sum=0;
    cin>>n>>a>>b;

    rep(i,n){
        int s_sum = first_sum(i);
        if (a<=s_sum && s_sum<=b){
            sum+=i;
        }
    }

    cout<<sum<<" "<<endl;

}
