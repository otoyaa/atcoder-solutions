#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;cin>>n;
  set<string> rui;

  for (int i=0;i<n;i++){
    string a_n;
    cin>>a_n;
    rui.insert(a_n);
  }

  if (rui.size()==3)
    cout<<"Three"<<endl;
  else
    cout<<"Four"<<endl;
}
