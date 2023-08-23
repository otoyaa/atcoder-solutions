#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    vector<int> media(n);

    int sum=0;
    for (int i=0;i<n;i++){
        cin>>media[i];
        sum+=media[i]; // sum all elements values
    }

    int media_notas=sum/n;
    for (int i=0;i<n;i++){
        if (media[i]>media_notas)
            cout<<media[i]-media_notas<<endl;
        else
            cout<<media_notas-media[i]<<endl;
    }
}     
