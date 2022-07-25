#include <bits/stdc++.h>
using namespace std;

const int MAXV = 1e9;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n;
    cin >> n;
    int  arr[n];
    int max = -MAXV, min = MAXV;
    for (int i = 0; i < n; ++i) {
    	cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
    	if (arr[i] > max) {
    		max = arr[i];
    	}
    	if (arr[i] < min) {
    		min = arr[i];
    	}
    }
    for (auto i: arr) {
    	cout << (i == max ? min : (i == min ? max : i)) << ' ';
    }
    return 0;
}