#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    char a[100][101]; // hColumn, wLinhas
    char c[102][102];
    for (int i = 0; i < h; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < h + 2; i++) {
        for (int j = 0; j < w + 2; j++) {
            c[i][j] = '#';
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            c[i + 1][j + 1] = a[i][j];
        }
    }

    for (int i = 0; i < h + 2; i++) {
        for (int j = 0; j < w + 2; j++) {
            cout << c[i][j];
        }
        cout << endl;
    }
}
