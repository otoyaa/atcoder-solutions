#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;cin>>n;
  int l,r;
  int counter=0;

  for (int i=0;i<n;++i){
    cin>>l>>r;
    
    for(int a=l;a<=r;++a){
      counter++;
    }
  }
                                                              
  cout<<counter<<endl;

    return 0;
}
