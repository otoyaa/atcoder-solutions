#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin>>S;
    char c;
    cin>>c;
    vector<int> index;

    string S2="";
    for (int i=0;i<S.length();i++){
        if (S[i]==c){
            S2+=c;
            S2+=c;

        }
        else
            S2+=S[i];
    }

    cout<<S2;

    return 0;
}
