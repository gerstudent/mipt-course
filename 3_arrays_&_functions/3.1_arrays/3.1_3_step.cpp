#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	for (int i = 0, j = n - 1; i < j; i++, j--) {
		swap(arr[i], arr[j]);
	}
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << ' ';
	}
	return 0;
}