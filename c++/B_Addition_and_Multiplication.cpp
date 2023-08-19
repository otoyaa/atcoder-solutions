#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,k;cin>>n>>k;
    int denkoukeijiban = 1;

    for (int i=0;i<n;++i){
        if (denkoukeijiban*2 <= denkoukeijiban+k)
            denkoukeijiban*=2;
        else
            denkoukeijiban+=k;
    }

    cout<<denkoukeijiban<<endl;

    return 0;
}
