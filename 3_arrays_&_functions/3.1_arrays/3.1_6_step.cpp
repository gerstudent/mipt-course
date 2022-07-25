#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, cnt = 0;
    cin >> n;
    int arr[n * 2];
    for (int i = 0; i < n * 2; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cnt += (arr[i + n] - arr[i] > 1);
    }
    cout << cnt << '\n';
    return 0;
}