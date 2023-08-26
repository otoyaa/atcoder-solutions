#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

    int maximo=max({A,B,C}); 
    int minimo=min({A,B,C});
    cout<<maximo-minimo<<endl;
    return 0;
}
