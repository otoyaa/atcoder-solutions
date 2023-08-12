#define rep(i,l) for(int i=0;i<(l);++i)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a[200];
    int b=0;
    int c=0;
    cin>>n;

    rep(i,n){
        cin>>a[i];
        b = b | a[i];
    }

    rep(i, 32){
        if (b%2==1){
        break;
        }
        b/=2;
        c++;
    }

    cout << c << endl;
    
    return 0;
}

