#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int q, num;
    cin >> q;
    while(q--) {
        cin >> num;
        cout << arr[num - 1] << ' ';
    }
    return 0;
}