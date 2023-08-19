#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;cin>>n;
    int s=0;

    for (int i=0;i<n.length();++i){
        s+= n[i] - '0';
    }

    if (stoi(n)%s==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
