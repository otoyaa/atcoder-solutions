#define rep(i,l) for(int i=0;i<(l);++i)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin>>N;
    vector<int> cards(N);

    rep(i,N)cin>>cards[i];
    sort(cards.begin(),cards.end());

    int alice=0,bob=0;
    rep(i,N){
        
        if (i%2==0)
            alice+=cards[i];
        else
            bob+=cards[i];
    }

    cout<<abs(alice-bob)<<endl;

    return 0;
}
