#include <bits/stdc++.h>
using namespace std;

int main() {
    char let;cin>>let;
    const char ar[]={'a','e','i','o','u'};
    bool flag=false;

    for (int i=0;i<5;i++){
        if (let==ar[i]) 
            flag=true;
    }

    if (!flag)
        cout<<"consonant"<<endl;
    else
        cout<<"vowel"<<endl;;
}       
